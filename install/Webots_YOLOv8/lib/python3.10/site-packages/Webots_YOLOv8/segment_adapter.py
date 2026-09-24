#!/usr/bin/env python3
"""
Adaptador entre o pipeline do Segmentation_for_robocup (main.py) e o fluxo de
frames do Webots/ROS 2.

O main.py original nao roda dentro de um no ROS por tres motivos:

  1. Pixel_Segment.load_image() so aceita CAMINHO DE ARQUIVO
     (np.fromfile + cv2.imdecode). No ROS o frame chega como numpy array.

  2. debug() e run() abrem janelas com cv2.waitKey(0), que bloqueia o callback.

  3. Os limiares foram tunados em 752x480 (grid 94x60). O trow=10000 e uma SOMA
     ABSOLUTA sobre a linha do grid, entao ele muda de significado quando a
     largura do grid muda. Em 1080x720 (grid 135x90) o mesmo 10000 equivale a
     14.5% do maximo da linha em vez de 20.9% -> o teste de linha fica ~1.4x
     mais permissivo. Alem disso, os parametros geometricos (dist_maxima=6,
     raio_max=12, comprimento_minimo=6, distancia_fusao=3, raio_circulo=3) estao
     todos em CELULAS DE GRID, ou seja, mudam de tamanho angular com a resolucao.

Este adaptador resolve os tres sem editar o repositorio da segmentacao: ele
importa o main.py por caminho, cria uma subclasse que aceita frame, e opera
sempre na resolucao de tuning (redimensionando o frame do Webots e devolvendo
as coordenadas ja reescaladas de volta pro frame original).

Uso tipico:

    seg = SegmentadorDeFrame(
        caminho_main='/caminho/Segmentation_for_robocup/main.py',
        lut_verde_csv='/caminho/green_pixels_webots.csv',
        branco_lower=(0, 0, 200),
        branco_up=(179, 40, 255),
    )
    resultado = seg.processar(frame_bgr)
"""

import importlib.util
import os
import sys
import types

import cv2
import numpy as np
import pandas as pd


# resolucao em que os limiares do main.py foram tunados
LARGURA_TUNING = 752
ALTURA_TUNING = 480
LARGURA_GRID_TUNING = LARGURA_TUNING // 8  # 94


def carregar_pixel_segment(caminho_main, branco_lower=None, branco_up=None):
    """
    Importa a classe Pixel_Segment a partir do arquivo main.py.

    O main.py faz 'import def_white_threshold as branco' no topo, e esse modulo
    le 'white_pixels.csv' com CAMINHO RELATIVO e imprima estatisticas no import.
    Dentro de um no ROS o cwd nao e a pasta do repo, entao isso quebra.

    Passando branco_lower/branco_up, injetamos um modulo falso no sys.modules
    antes do import, com os limiares calibrados pro Webots. Assim o main.py fica
    intocado e nada de arquivo relativo e lido.
    """
    caminho_main = os.path.abspath(caminho_main)
    pasta_repo = os.path.dirname(caminho_main)

    if not os.path.exists(caminho_main):
        raise FileNotFoundError(
            f'main.py nao encontrado em "{caminho_main}". '
            f'Ajuste o parametro caminho_main do no.'
        )

    if pasta_repo not in sys.path:
        sys.path.insert(0, pasta_repo)

    if branco_lower is not None and branco_up is not None:
        modulo_falso = types.ModuleType('def_white_threshold')
        modulo_falso.lower = np.array(branco_lower, dtype=int)
        modulo_falso.up = np.array(branco_up, dtype=int)
        sys.modules['def_white_threshold'] = modulo_falso

    spec = importlib.util.spec_from_file_location('segmentation_main', caminho_main)
    modulo = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(modulo)
    return modulo.Pixel_Segment


def construir_lut_verde(caminho_csv, dilatar_s=0, dilatar_v=0):
    """
    Monta o cubo LUT 180x256x256 uma unica vez (11.8 MB).

    O main.py refaz esse np.zeros a cada imagem, o que num loop de video e
    alocacao inutil de 11.8 MB por frame.

    dilatar_s / dilatar_v alargam cada amostra em S e V. No Webots o carpete tem
    normalMap e occlusionMap, entao o mesmo verde aparece com brilho diferente
    dependendo da luz e do angulo; a dilatacao evita ter que amostrar todos os
    casos na calibracao. O H nao e dilatado de proposito: dilatar H e o que faz
    verde vazar pra amarelo/ciano.
    """
    tabela = pd.read_csv(caminho_csv)
    lut = np.zeros((180, 256, 256), dtype=np.uint8)

    h = tabela['H'].values.astype(int)
    s = tabela['S'].values.astype(int)
    v = tabela['V'].values.astype(int)

    for ds in range(-dilatar_s, dilatar_s + 1):
        s_d = np.clip(s + ds, 0, 255)
        for dv in range(-dilatar_v, dilatar_v + 1):
            v_d = np.clip(v + dv, 0, 255)
            lut[h, s_d, v_d] = 255

    return lut


def _fabricar_subclasse(Pixel_Segment):
    """
    Cria a subclasse que aceita frame numpy e LUT pre-construida.

    Feita em funcao porque a classe base so existe depois do import dinamico.
    """

    class SegmentDeFrame(Pixel_Segment):

        def __init__(self, frame, lut_verde, branco_lower, branco_up, trow, tpix, twin):
            # nao chamamos super().__init__ porque ele exige caminho de arquivo
            # e refaz o pd.read_csv da LUT a cada frame
            self.path = None
            self.img = frame
            self.height, self.width, self.channels = frame.shape

            self.img_hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
            self.h_img, self.s_img, self.v_img = cv2.split(self.img_hsv)

            self.grid_height = int(self.height / 8)
            self.grid_width = int(self.width / 8)

            self.tpix = tpix
            self.trow = trow
            self.twin = twin
            self.histogram = []

            self.lut_verde = lut_verde
            self._branco_lower = np.array(branco_lower, dtype=int)
            self._branco_up = np.array(branco_up, dtype=int)

        def load_image(self):
            # ja carregado no __init__
            pass

        def masks_and_resize(self):
            # mesma logica do main.py, mas sem realocar a LUT a cada frame
            self.white_mask = cv2.inRange(self.img_hsv, self._branco_lower, self._branco_up)
            self.green_mask = self.lut_verde[self.h_img, self.s_img, self.v_img]

            self.white_mask_resized = cv2.resize(
                self.white_mask, (self.grid_width, self.grid_height),
                interpolation=cv2.INTER_AREA).astype(np.float32)
            self.green_mask_resized = cv2.resize(
                self.green_mask, (self.grid_width, self.grid_height),
                interpolation=cv2.INTER_AREA).astype(np.float32)

    return SegmentDeFrame


class SegmentadorDeFrame:
    """
    Envoltorio sem estado externo: cada frame gera um objeto novo do pipeline
    (o Pixel_Segment guarda muito estado intermediario e reutilizar da bug).
    """

    def __init__(self,
                 caminho_main,
                 lut_verde_csv,
                 branco_lower=(0, 0, 200),
                 branco_up=(179, 40, 255),
                 largura_processamento=LARGURA_TUNING,
                 altura_processamento=ALTURA_TUNING,
                 tpix=20,
                 trow=10000,
                 twin=3000,
                 dilatar_s=6,
                 dilatar_v=10):

        Pixel_Segment = carregar_pixel_segment(caminho_main, branco_lower, branco_up)
        self._Classe = _fabricar_subclasse(Pixel_Segment)

        self.lut_verde = construir_lut_verde(lut_verde_csv, dilatar_s, dilatar_v)
        self.branco_lower = branco_lower
        self.branco_up = branco_up

        # forcar multiplo de 8: o pipeline inteiro trabalha em grid = pixel/8
        self.largura_proc = (int(largura_processamento) // 8) * 8
        self.altura_proc = (int(altura_processamento) // 8) * 8

        self.tpix = tpix
        self.twin = twin

        # trow e soma absoluta sobre a linha do grid -> reescala com a largura
        self.trow = trow * (self.largura_proc / 8.0) / LARGURA_GRID_TUNING

    def processar(self, frame_bgr, desenhar_debug=True):
        """
        Roda o pipeline completo num frame BGR.

        Devolve dict com coordenadas ja em PIXEL do frame ORIGINAL:
          'linhas'      : [((x1,y1),(x2,y2)), ...]
          'cruzamentos' : [{'x','y','tipo','num_rays'}, ...]
          'borda_campo' : [(x,y), ...]  linha do horizonte do campo
          'debug'       : frame BGR com overlay (ou None)
        """
        altura_orig, largura_orig = frame_bgr.shape[:2]

        precisa_resize = (largura_orig != self.largura_proc or altura_orig != self.altura_proc)
        if precisa_resize:
            frame_proc = cv2.resize(frame_bgr, (self.largura_proc, self.altura_proc),
                                    interpolation=cv2.INTER_AREA)
        else:
            frame_proc = frame_bgr

        obj = self._Classe(frame_proc, self.lut_verde, self.branco_lower,
                           self.branco_up, self.trow, self.tpix, self.twin)

        # mesma ordem do debug() do main.py, sem nenhuma janela
        obj.masks_and_resize()
        obj.binarization()
        obj.skeletonization_and_connect()
        obj.place_nodes()
        obj.connect_nodes_locally()
        obj.stretch_endpoints()
        obj.reconnect_isolated_nodes()
        obj.evaluate_candidate_connections()
        obj.search_directional_connections()
        obj.close_junction_gaps()
        obj.classify_crossings()
        obj.merge_nearby_crossings()
        obj.validate_crossings()
        obj.split_lines()
        obj.extract_final_lines()
        obj.validate_lines()

        # grid -> pixel de processamento -> pixel original
        escala_x = 8.0 * largura_orig / self.largura_proc
        escala_y = 8.0 * altura_orig / self.altura_proc

        linhas = []
        for linha in obj.linhas_campo:
            x1, y1 = linha['p1']
            x2, y2 = linha['p2']
            linhas.append(((x1 * escala_x, y1 * escala_y),
                           (x2 * escala_x, y2 * escala_y)))

        raios_por_tipo = {'L': 2, 'T': 3, 'X': 4}
        cruzamentos = []
        for c in obj.cruzamentos:
            cruzamentos.append({
                'x': c['x'] * escala_x,
                'y': c['y'] * escala_y,
                'tipo': c['tipo'],
                'num_rays': raios_por_tipo.get(c['tipo'], 0),
            })

        # contour_points termina com 2 pontos artificiais que fecham o poligono
        # pela base da imagem; esses nao fazem parte da borda real do campo
        borda = [(float(p[0]) * escala_x, float(p[1]) * escala_y)
                 for p in obj.contour_points[:-2]]

        debug = self._desenhar(frame_bgr, linhas, cruzamentos, borda) if desenhar_debug else None

        return {
            'linhas': linhas,
            'cruzamentos': cruzamentos,
            'borda_campo': borda,
            'debug': debug,
            'obj': obj,  # util pra inspecionar mascaras no modo calibracao
        }

    @staticmethod
    def _desenhar(frame, linhas, cruzamentos, borda):
        img = frame.copy()

        if len(borda) >= 2:
            pts = np.array([[int(x), int(y)] for x, y in borda], dtype=np.int32)
            cv2.polylines(img, [pts], isClosed=False, color=(0, 255, 255), thickness=2)

        for (x1, y1), (x2, y2) in linhas:
            cv2.line(img, (int(x1), int(y1)), (int(x2), int(y2)), (0, 0, 255), 2)

        cor_por_tipo = {'L': (0, 140, 255), 'T': (255, 0, 200), 'X': (255, 255, 0)}
        for c in cruzamentos:
            x, y = int(c['x']), int(c['y'])
            cor = cor_por_tipo.get(c['tipo'], (200, 200, 200))
            cv2.circle(img, (x, y), 8, cor, -1)
            cv2.putText(img, str(c['tipo']), (x + 10, y),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.6, cor, 2)

        cv2.putText(img, f'linhas: {len(linhas)}  cruz: {len(cruzamentos)}',
                    (15, 30), cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 255, 255), 2)
        return img
