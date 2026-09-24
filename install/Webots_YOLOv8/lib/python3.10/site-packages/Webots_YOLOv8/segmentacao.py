import cv2 
import numpy as np
import pandas as pd 
from . import def_white_threshold as branco

from scipy.ndimage import gaussian_filter1d
from scipy.signal import medfilt

class Pixel_Segment:
    def __init__(self,lut_csv,tpix=20,trow = 10000,twin = 3000):
        self.lut_csv = pd.read_csv(lut_csv)

        self.tpix = tpix
        self.trow = trow
        self.grid_width_referencia = 94
        self.twin = twin

        self.lut_verde = self._criar_lut_verde()

    def _criar_lut_verde(self):
        lut_verde = np.zeros(
            (180, 256, 256),
            dtype=np.uint8
        )

        h_vals = self.lut_csv['H'].values.astype(int)
        s_vals = self.lut_csv['S'].values.astype(int)
        v_vals = self.lut_csv['V'].values.astype(int)

        lut_verde[h_vals, s_vals, v_vals] = 255
        return lut_verde 

    def _preparar_frame(self, frame):
        if frame is None:
            raise ValueError('O frame recebido é inválido.')

        if frame.ndim != 3 or frame.shape[2] != 3:
            raise ValueError('O frame deve ser uma imagem BGR com 3 canais.')

        self.img = frame

        self.height, self.width, self.channels = self.img.shape

        self.grid_height = self.height // 8
        self.grid_width = self.width // 8

        self.img_hsv = cv2.cvtColor(
            self.img,
            cv2.COLOR_BGR2HSV
        )

        self.h_img, self.s_img, self.v_img = cv2.split(
            self.img_hsv
        )



    def _masks_and_resize(self):
        #white mask
        lower = branco.lower
        up = branco.up

        white_mask = cv2.inRange(self.img_hsv, lower, up)

        #green mask
        green_mask = self.lut_verde[self.h_img,self.s_img,self.v_img]
        #masks resize
        white_mask_resized = cv2.resize(white_mask,(self.grid_width,self.grid_height),interpolation=cv2.INTER_AREA).astype(np.float32)
        green_mask_resized = cv2.resize(green_mask,(self.grid_width,self.grid_height),interpolation=cv2.INTER_AREA).astype(np.float32)

        return {
            'white_mask':white_mask,
            'green_mask':green_mask,
            'white_mask_resized':white_mask_resized,
            'green_mask_resized':green_mask_resized
            }

    def _binarization(
        self,
        white_mask_resized,
        green_mask_resized
    ):
        # --------------------------------------------------
        # Fusão das máscaras branca e verde
        # --------------------------------------------------

        uniq_img_cal = (
            white_mask_resized * 0.5
            + green_mask_resized
        )

        uniq_img_cal = np.clip(
            uniq_img_cal,
            0,
            255
        )

        uniq_img = uniq_img_cal.astype(np.uint8)

        grid_height, grid_width = uniq_img.shape

        # --------------------------------------------------
        # Soma dos valores de linhas vizinhas
        # --------------------------------------------------

        soma_por_linha = np.sum(
            uniq_img,
            axis=1
        )

        row_sums_1d = (
            soma_por_linha
            + np.roll(soma_por_linha, 1)
        )

        # Impede que a primeira linha use a última como vizinha
        row_sums_1d[0] = soma_por_linha[0]

        matriz_row_sum = np.broadcast_to(
            row_sums_1d.reshape(grid_height, 1),
            (grid_height, grid_width)
        )

        # --------------------------------------------------
        # Soma em uma janela 4 × 8
        # --------------------------------------------------

        kernel_8x4 = np.ones(
            (4, 8),
            dtype=np.float32
        )

        matriz_window_sum = cv2.filter2D(
            uniq_img.astype(np.float32),
            -1,
            kernel_8x4,
            anchor=(4, 0)
        )

        # --------------------------------------------------
        # Binarização
        # --------------------------------------------------

        passou_no_pix = uniq_img >= self.tpix

        # Ajusta trow proporcionalmente à largura do grid
        trow_efetivo = (
            self.trow
            * grid_width
            / self.grid_width_referencia
        )

        passou_no_row = matriz_row_sum >= trow_efetivo
        passou_na_win = matriz_window_sum >= self.twin

        borda_binaria = (
            passou_no_pix
            & (passou_no_row | passou_na_win)
        ).astype(np.uint8) * 255

        # --------------------------------------------------
        # Busca da borda do campo em cada coluna
        # --------------------------------------------------

        n_linhas, n_colunas = borda_binaria.shape

        # NaN representa uma coluna sem detecção
        y_detectado = np.full(
            n_colunas,
            np.nan,
            dtype=np.float32
        )

        for col in range(n_colunas):
            encontrou = False
            zero_count = 0

            # Percorre a coluna de baixo para cima
            for linha in range(n_linhas - 1, -1, -1):

                if borda_binaria[linha, col] == 255:
                    encontrou = True
                    zero_count = 0

                    # Guarda o pixel válido mais alto encontrado
                    y_detectado[col] = linha

                elif encontrou:
                    zero_count += 1

                    # Para depois de quatro pixels vazios consecutivos
                    if zero_count >= 4:
                        break

        # --------------------------------------------------
        # Tratamento das colunas sem detecção
        # --------------------------------------------------

        colunas_validas = np.isfinite(y_detectado)
        quantidade_validas = np.count_nonzero(colunas_validas)

        minimo_colunas_validas = max(
            2,
            int(0.10 * n_colunas)
        )

        if quantidade_validas >= minimo_colunas_validas:
            indices = np.arange(n_colunas)

            y_vals = y_detectado.copy()

            # Interpola somente as colunas sem detecção
            y_vals[~colunas_validas] = np.interp(
                indices[~colunas_validas],
                indices[colunas_validas],
                y_detectado[colunas_validas]
            )

            campo_detectado = True

        else:
            # Mantém um vetor válido para debug, mas não cria campo
            y_vals = np.full(
                n_colunas,
                n_linhas - 1,
                dtype=np.float32
            )

            campo_detectado = False

        # Mantido para visualização e análise
        histogram = [
            [float(y_vals[col]), col]
            for col in range(n_colunas)
        ]

        # --------------------------------------------------
        # Suavização da borda
        # --------------------------------------------------

        y_median = medfilt(
            y_vals,
            kernel_size=3
        )

        y_gauss = gaussian_filter1d(
            y_median,
            sigma=1.0
        )

        y_vals = np.clip(
            y_gauss,
            0,
            grid_height - 1
        ).astype(np.float32)

        # --------------------------------------------------
        # Construção do contorno do campo
        # --------------------------------------------------

        if campo_detectado:
            mask = np.ones_like(
                y_vals,
                dtype=bool
            )

            # Filtro de convexidade local
            for i in range(1, len(y_vals) - 1):
                Lx, Ly = i - 1, y_vals[i - 1]
                Px, Py = i, y_vals[i]
                Rx, Ry = i + 1, y_vals[i + 1]

                v = (
                    (Rx - Lx) * (Py - Ly)
                    - (Px - Lx) * (Ry - Ly)
                )

                if v < 0:
                    mask[i] = False

            contour_points = []

            for x in range(n_colunas):
                if mask[x]:
                    y = int(y_vals[x])
                    contour_points.append([x, y])

            # Pontos inferiores usados para fechar o polígono
            contour_points.append([
                n_colunas - 1,
                n_linhas - 1
            ])

            contour_points.append([
                0,
                n_linhas - 1
            ])

            contour_points = np.array(
                contour_points,
                dtype=np.int32
            )

            mascara_convexa = np.zeros(
                (n_linhas, n_colunas),
                dtype=np.uint8
            )

            if len(contour_points) >= 3:
                cv2.fillPoly(
                    mascara_convexa,
                    [contour_points],
                    255
                )

        else:
            # Nenhum campo detectado: resultado realmente vazio
            contour_points = np.empty(
                (0, 2),
                dtype=np.int32
            )

            mascara_convexa = np.zeros(
                (n_linhas, n_colunas),
                dtype=np.uint8
            )

        # --------------------------------------------------
        # Resultado
        # --------------------------------------------------

        return {
            'uniq_img': uniq_img,
            'borda_binaria': borda_binaria,
            'histogram': histogram,
            'y_gauss': y_gauss,
            'contour_points': contour_points,
            'mascara_convexa': mascara_convexa,
            'campo_detectado': campo_detectado,
            'trow_efetivo': float(trow_efetivo)
        }
    
    def _skeletonization_and_connect(self,white_mask,white_mask_resized,mascara_convexa):
        #skeletização

        field_line_mask = cv2.bitwise_and(white_mask_resized.astype(np.uint8),mascara_convexa)

        # Máscara do campo na resolução original
        mascara_campo_original = cv2.resize(
            mascara_convexa,
            (self.width, self.height),
            interpolation=cv2.INTER_NEAREST
        )

        segmentacao_linhas = cv2.bitwise_and(
            white_mask,
            mascara_campo_original
        )

        mascara_relevo = cv2.GaussianBlur(
            field_line_mask,
            (5, 5),
            0
            )
        
        padded = np.pad(
            mascara_relevo,
            ((1, 1), (1, 1)),
            mode='constant',
            constant_values=0
        )

        vizinhos = np.stack([
            padded[:-2, 1:-1],   # cima
            padded[2:, 1:-1],    # baixo
            padded[1:-1, 2:],    # direita
            padded[1:-1, :-2],   # esquerda
            padded[:-2, 2:],     # superior direita
            padded[2:, 2:],      # inferior direita
            padded[:-2, :-2],    # superior esquerda
            padded[2:, :-2]      # inferior esquerda
        ])

        c_xy = np.sum(
            vizinhos >= mascara_relevo[np.newaxis, :, :],
            axis=0,
            dtype=np.uint8
        )

        nao_e_fundo = mascara_relevo > 0
        e_cume_montanha = c_xy < 3 
        skeleton = nao_e_fundo & e_cume_montanha

        skeleton[0, :] = False
        skeleton[-1, :] = False
        skeleton[:, 0] = False
        skeleton[:, -1] = False

        skeleton_img = np.where(
            skeleton,
            255,
            0   
        ).astype(np.uint8)

        return {
            'mascara_campo_original': mascara_campo_original,
            'field_line_mask': field_line_mask,
            'segmentacao_linhas': segmentacao_linhas,
            'mascara_relevo': mascara_relevo,
            'skeleton': skeleton,
            'skeleton_img': skeleton_img
        }
    
    def processar(self, frame):
        self._preparar_frame(frame)

        resultado_mascaras = self._masks_and_resize()

        resultado_binarizacao = self._binarization(
            resultado_mascaras['white_mask_resized'],
            resultado_mascaras['green_mask_resized']
        )

        resultado_esqueleto = self._skeletonization_and_connect(
            resultado_mascaras['white_mask'],
            resultado_mascaras['white_mask_resized'],
            resultado_binarizacao['mascara_convexa']
        )   

        return {
            **resultado_mascaras,
            **resultado_binarizacao,
            **resultado_esqueleto,
        }

def desenhar_segmentacao(frame, resultado, alpha=0.35):
    if frame is None:
        raise ValueError('O frame para desenho é inválido.')

    debug_img = frame.copy()
    altura, largura = debug_img.shape[:2]

    # --------------------------------------------------
    # Segmentação das linhas
    # --------------------------------------------------

    segmentacao_linhas = resultado.get(
        'segmentacao_linhas'
    )

    if segmentacao_linhas is not None:
        # Garante que a máscara tenha o mesmo tamanho do frame
        if segmentacao_linhas.shape[:2] != (altura, largura):
            segmentacao_linhas = cv2.resize(
                segmentacao_linhas,
                (largura, altura),
                interpolation=cv2.INTER_NEAREST
            )

        mascara_linhas = segmentacao_linhas > 0

        overlay = debug_img.copy()

        # Vermelho em BGR
        overlay[mascara_linhas] = (0, 0, 255)

        # Transparência apenas aparente; fora da máscara
        # overlay e debug_img possuem o mesmo valor
        debug_img = cv2.addWeighted(
            debug_img,
            1.0 - alpha,
            overlay,
            alpha,
            0
        )

    # --------------------------------------------------
    # Limite superior do campo
    # --------------------------------------------------

    campo_detectado = resultado.get(
        'campo_detectado',
        False
    )

    contour_points = resultado.get(
        'contour_points'
    )

    if (
        campo_detectado
        and contour_points is not None
        and len(contour_points) > 2
    ):
        grid_height, grid_width = resultado[
            'borda_binaria'
        ].shape

        escala_x = largura / grid_width
        escala_y = altura / grid_height

        # Ignora os dois pontos inferiores artificiais
        pontos_borda = (
            contour_points[:-2]
            .astype(np.float32)
            .copy()
        )

        pontos_borda[:, 0] *= escala_x
        pontos_borda[:, 1] *= escala_y

        pontos_borda = np.round(
            pontos_borda
        ).astype(np.int32).reshape((-1, 1, 2))

        # Amarelo em BGR
        cv2.polylines(
            debug_img,
            [pontos_borda],
            isClosed=False,
            color=(0, 255, 255),
            thickness=2
        )

    # --------------------------------------------------
    # Informações
    # --------------------------------------------------

    if campo_detectado:
        texto_campo = 'Campo: detectado'
        cor_campo = (0, 255, 0)
    else:
        texto_campo = 'Campo: nao detectado'
        cor_campo = (0, 0, 255)

    cv2.putText(
        debug_img,
        texto_campo,
        (20, 30),
        cv2.FONT_HERSHEY_SIMPLEX,
        0.7,
        cor_campo,
        2
    )

    return debug_img


if __name__ == '__main__':
    pass

 