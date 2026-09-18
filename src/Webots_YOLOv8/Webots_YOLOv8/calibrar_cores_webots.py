#!/usr/bin/env python3
"""
Calibracao de cor para o Webots.

ESTE E O PASSO QUE FAZ OU QUEBRA A ADAPTACAO.

A green_pixels.csv do repo de segmentacao nao e uma FAIXA de HSV: e uma lista de
triplas (H,S,V) EXATAS amostradas das imagens de tuning. O main.py monta um cubo
180x256x256 e marca so essas triplas. Se o verde do Webots cair fora dessa lista,
a green_mask sai praticamente zerada, o uniq_img nao passa no tpix, a
borda_binaria fica vazia, a mascara convexa nao cobre nada e o pipeline inteiro
devolve zero linha - sem lancar nenhuma excecao. O sintoma e "nao detecta nada",
nao um erro.

Alem disso o def_white_threshold.py calcula os limiares de branco no momento do
import, lendo white_pixels.csv com caminho relativo. Dentro de um no ROS isso
quebra (cwd diferente) ou pior: usa limiares de outro dataset.

Este script coleta frames do proprio Webots e gera os dois arquivos novos.

Modos:
  --roi     : voce arrasta um retangulo no carpete e outro numa linha branca
              (mais confiavel, recomendado na primeira calibracao)
  --auto    : separa por luminancia dentro da metade inferior da imagem
              (rapido, bom pra recalibrar depois de mudar a iluminacao)

Uso:
  ros2 run Webots_YOLOv8 calibrar --ros-args -p modo:=roi -p n_frames:=15
"""

import argparse
import os
import sys

import cv2
import numpy as np
import pandas as pd

import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image as ROS_Image
from cv_bridge import CvBridge


class ColetorDeFrames(Node):
    """Junta N frames espacados no tempo pra cobrir variacao de luz e angulo."""

    def __init__(self, topico, n_frames):
        super().__init__('coletor_calibracao')
        self.bridge = CvBridge()
        self.frames = []
        self.n_alvo = n_frames
        self.create_subscription(ROS_Image, topico, self._cb, qos_profile_sensor_data)
        self.get_logger().info(
            f'coletando {n_frames} frames de {topico} - '
            f'movimente o robo com o teleop pra variar o ponto de vista')

    def _cb(self, msg):
        if len(self.frames) >= self.n_alvo:
            return
        self.frames.append(self.bridge.imgmsg_to_cv2(msg, 'bgr8'))
        self.get_logger().info(f'frame {len(self.frames)}/{self.n_alvo}')

    def pronto(self):
        return len(self.frames) >= self.n_alvo


def amostrar_por_roi(frames):
    """Pede um retangulo de carpete e um de linha branca no primeiro frame."""
    ref = frames[0]

    print('\n>> Arraste um retangulo SO SOBRE O CARPETE VERDE e aperte ENTER')
    r_verde = cv2.selectROI('calibracao: carpete verde', ref, showCrosshair=True)
    cv2.destroyAllWindows()

    print('>> Agora arraste um retangulo SO SOBRE UMA LINHA BRANCA e aperte ENTER')
    r_branco = cv2.selectROI('calibracao: linha branca', ref, showCrosshair=True)
    cv2.destroyAllWindows()

    if r_verde[2] == 0 or r_branco[2] == 0:
        raise SystemExit('ROI vazia - repita a calibracao')

    verdes, brancos = [], []
    for f in frames:
        hsv = cv2.cvtColor(f, cv2.COLOR_BGR2HSV)
        x, y, w, h = r_verde
        verdes.append(hsv[y:y + h, x:x + w].reshape(-1, 3))
        x, y, w, h = r_branco
        brancos.append(hsv[y:y + h, x:x + w].reshape(-1, 3))

    return np.vstack(verdes), np.vstack(brancos)


def amostrar_automatico(frames):
    """
    Heuristica: na metade inferior da imagem, quase tudo e campo.
    Branco = alta luminancia e baixa saturacao. Verde = o resto.
    """
    verdes, brancos = [], []
    for f in frames:
        meio = f.shape[0] // 2
        recorte = f[meio:, :]
        hsv = cv2.cvtColor(recorte, cv2.COLOR_BGR2HSV)

        s = hsv[:, :, 1].astype(int)
        v = hsv[:, :, 2].astype(int)

        mask_branco = (v > 170) & (s < 70)
        mask_verde = ~mask_branco & (v > 30)

        brancos.append(hsv[mask_branco])
        verdes.append(hsv[mask_verde])

    return np.vstack(verdes), np.vstack(brancos)


def gerar_arquivos(amostras_verde, amostras_branco, pasta_saida, fator_std=2.5):
    os.makedirs(pasta_saida, exist_ok=True)

    # --- LUT verde: triplas unicas, mesmo formato de green_pixels.csv ---
    df_verde = pd.DataFrame(amostras_verde, columns=['H', 'S', 'V']).drop_duplicates()
    caminho_lut = os.path.join(pasta_saida, 'green_pixels_webots.csv')
    df_verde.to_csv(caminho_lut, index=False)

    # --- limiares de branco: media +- k*desvio, no formato do OpenCV ---
    medias = amostras_branco.astype(float).mean(axis=0)
    desvios = amostras_branco.astype(float).std(axis=0)
    lower = np.clip(medias - fator_std * desvios, [0, 0, 0], [179, 255, 255]).astype(int)
    up = np.clip(medias + fator_std * desvios, [0, 0, 0], [179, 255, 255]).astype(int)

    # o branco de campo nao tem matiz util: a linha e acromatica, o H flutua
    # aleatoriamente com o ruido. Travar H no intervalo cheio evita descartar
    # pixel branco legitimo so porque o H caiu longe da media.
    lower[0], up[0] = 0, 179

    caminho_yaml = os.path.join(pasta_saida, 'segmentation_params.yaml')
    with open(caminho_yaml, 'w') as f:
        f.write('/**:\n')
        f.write('  ros__parameters:\n')
        f.write(f'    lut_verde_csv: "{os.path.abspath(caminho_lut)}"\n')
        f.write(f'    branco_lower: [{lower[0]}, {lower[1]}, {lower[2]}]\n')
        f.write(f'    branco_up: [{up[0]}, {up[1]}, {up[2]}]\n')

    print('\n=== calibracao concluida ===')
    print(f'amostras verdes unicas : {len(df_verde)}')
    print(f'amostras brancas       : {len(amostras_branco)}')
    print(f'branco lower           : {list(lower)}')
    print(f'branco up              : {list(up)}')
    print(f'\nLUT   -> {caminho_lut}')
    print(f'PARAMS-> {caminho_yaml}')

    if len(df_verde) < 500:
        print('\nATENCAO: poucas triplas de verde. Colete mais frames ou aumente '
              'dilatar_s/dilatar_v no no de segmentacao.')

    return caminho_lut, caminho_yaml


def main(args=None):
    parser = argparse.ArgumentParser()
    parser.add_argument('--modo', default='roi', choices=['roi', 'auto'])
    parser.add_argument('--n_frames', type=int, default=15)
    parser.add_argument('--topico', default='/AUREA/camera_optical_frame/image_color')
    parser.add_argument('--saida', default=os.path.expanduser('~/ros2_ws/calibracao'))
    conhecidos, resto = parser.parse_known_args(sys.argv[1:])

    rclpy.init(args=args)
    node = ColetorDeFrames(conhecidos.topico, conhecidos.n_frames)
    while rclpy.ok() and not node.pronto():
        rclpy.spin_once(node, timeout_sec=0.5)
    frames = node.frames
    node.destroy_node()
    rclpy.shutdown()

    if not frames:
        raise SystemExit('nenhum frame recebido - a simulacao esta rodando?')

    if conhecidos.modo == 'roi':
        verde, branco = amostrar_por_roi(frames)
    else:
        verde, branco = amostrar_automatico(frames)

    gerar_arquivos(verde, branco, conhecidos.saida)


if __name__ == '__main__':
    main()
