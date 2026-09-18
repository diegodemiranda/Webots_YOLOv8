#!/usr/bin/env python3
"""
Validacao quantitativa da segmentacao dentro do Webots.

Ideia: o Webots sabe exatamente onde o robo esta e a geometria do campo e
conhecida (RobocupSoccerField kid-size = 9 x 6 m, identica a que o
opencv_field_simulator.py ja usa). Entao da pra gerar o GABARITO em pixel a cada
frame - projetando as linhas e cruzamentos teoricos pela camera real - e comparar
com o que a segmentacao publicou, usando a MESMA metrica do
simulation/evaluate_result.py.

Pre-requisitos:
  1. o Robot AUREA precisa ser supervisor (supervisor TRUE no .wbt) e o
     my_robot_driver.py precisa publicar a TF map -> base_link.
     Sem isso nao ha pose verdadeira e nao ha gabarito.
  2. camera_info publicado pelo webots_ros2_driver (ja e, por padrao).

Saida: metricas acumuladas de precisao/revocacao/erro de posicao, impressas a
cada N frames e gravadas em CSV no fim.

  ros2 run Webots_YOLOv8 avaliar --ros-args -p tolerancia_px:=25
"""

import csv
import os

import numpy as np

import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data

from sensor_msgs.msg import CameraInfo
import soccer_vision_2d_msgs.msg as sv2dm

from tf2_ros import Buffer, TransformListener
from rclpy.duration import Duration


# --- geometria do campo (RobocupSoccerField kid-size, valores do proto) ---
A = 9.0     # comprimento entre linhas
B = 6.0     # largura entre linhas
E = 1.0     # profundidade da area de penalti
F = 3.0     # largura da area de penalti
C = 0.6     # profundidade da area do gol
D = 2.6     # largura da area do gol
RAIO_CIRCULO = 0.75


def linhas_do_campo():
    """Linhas retas do campo em coordenadas de mundo (z=0)."""
    linhas = []
    cantos = [(-A / 2, -B / 2), (A / 2, -B / 2), (A / 2, B / 2), (-A / 2, B / 2), (-A / 2, -B / 2)]
    for i in range(4):
        linhas.append(((*cantos[i], 0.0), (*cantos[i + 1], 0.0)))

    linhas.append(((0, -B / 2, 0.0), (0, B / 2, 0.0)))  # linha central

    for lado in (-1, 1):
        for prof, larg in ((E, F), (C, D)):
            x_fundo = lado * A / 2
            x_frente = x_fundo - lado * prof
            linhas.append(((x_fundo, -larg / 2, 0.0), (x_frente, -larg / 2, 0.0)))
            linhas.append(((x_frente, -larg / 2, 0.0), (x_frente, larg / 2, 0.0)))
            linhas.append(((x_frente, larg / 2, 0.0), (x_fundo, larg / 2, 0.0)))

    return linhas


def cruzamentos_do_campo():
    """Cruzamentos teoricos, com o tipo esperado."""
    cruz = []
    for cx, cy in [(-A / 2, -B / 2), (A / 2, -B / 2), (A / 2, B / 2), (-A / 2, B / 2)]:
        cruz.append({'x': cx, 'y': cy, 'tipo': 'L'})

    cruz.append({'x': 0.0, 'y': -B / 2, 'tipo': 'T'})
    cruz.append({'x': 0.0, 'y': B / 2, 'tipo': 'T'})
    cruz.append({'x': 0.0, 'y': -RAIO_CIRCULO, 'tipo': 'X'})
    cruz.append({'x': 0.0, 'y': RAIO_CIRCULO, 'tipo': 'X'})

    for lado in (-1, 1):
        for prof, larg in ((E, F), (C, D)):
            x_fundo = lado * A / 2
            x_frente = x_fundo - lado * prof
            cruz.append({'x': x_frente, 'y': -larg / 2, 'tipo': 'L'})
            cruz.append({'x': x_frente, 'y': larg / 2, 'tipo': 'L'})
            cruz.append({'x': x_fundo, 'y': -larg / 2, 'tipo': 'T'})
            cruz.append({'x': x_fundo, 'y': larg / 2, 'tipo': 'T'})

    return cruz


def quat_para_matriz(q):
    x, y, z, w = q.x, q.y, q.z, q.w
    return np.array([
        [1 - 2 * (y * y + z * z), 2 * (x * y - z * w), 2 * (x * z + y * w)],
        [2 * (x * y + z * w), 1 - 2 * (x * x + z * z), 2 * (y * z - x * w)],
        [2 * (x * z - y * w), 2 * (y * z + x * w), 1 - 2 * (x * x + y * y)],
    ])


class Avaliador(Node):

    def __init__(self):
        super().__init__('avaliador_segmentacao')

        self.declare_parameter('tolerancia_px', 25.0)
        self.declare_parameter('frame_mundo', 'map')
        self.declare_parameter('frame_camera', 'camera_optical_frame')
        self.declare_parameter('csv_saida', os.path.expanduser('~/ros2_ws/avaliacao_segmentacao.csv'))
        self.declare_parameter('resumo_a_cada', 30)

        self.tolerancia = float(self.get_parameter('tolerancia_px').value)
        self.frame_mundo = self.get_parameter('frame_mundo').value
        self.frame_camera = self.get_parameter('frame_camera').value

        self.tf_buffer = Buffer(cache_time=Duration(seconds=10.0))
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.K = None
        self.largura = None
        self.altura = None
        self.create_subscription(CameraInfo, '/AUREA/camera_optical_frame/camera_info',
                                self._cb_info, 1)

        self.create_subscription(sv2dm.MarkingArray, 'markings_in_image',
                                 self._cb_markings, qos_profile_sensor_data)

        self.linhas_gt = linhas_do_campo()
        self.cruz_gt = cruzamentos_do_campo()

        self.registros = []
        self.n = 0
        self.get_logger().info('avaliador pronto - aguardando camera_info e tf')

    def _cb_info(self, msg):
        self.K = np.array(msg.k, dtype=np.float64).reshape(3, 3)
        self.largura, self.altura = msg.width, msg.height

    def _projetar(self, pontos_mundo, T_cam_mundo):
        """Mundo -> frame optico da camera -> pixel. Devolve None pra pontos atras."""
        pontos = np.array(pontos_mundo, dtype=np.float64).reshape(-1, 3)
        homog = np.hstack([pontos, np.ones((len(pontos), 1))])
        cam = (T_cam_mundo @ homog.T).T[:, :3]

        saida = []
        for p in cam:
            if p[2] <= 0.05:          # atras da camera
                saida.append(None)
                continue
            uvw = self.K @ p
            u, v = uvw[0] / uvw[2], uvw[1] / uvw[2]
            if not (0 <= u < self.largura and 0 <= v < self.altura):
                saida.append(None)    # fora do quadro
                continue
            saida.append((u, v))
        return saida

    def _cb_markings(self, msg):
        if self.K is None:
            return
        try:
            tf = self.tf_buffer.lookup_transform(
                self.frame_camera, self.frame_mundo, msg.header.stamp,
                timeout=Duration(seconds=0.2))
        except Exception as e:
            self.get_logger().warn(f'sem tf {self.frame_mundo}->{self.frame_camera}: {e}',
                                   throttle_duration_sec=5.0)
            return

        R = quat_para_matriz(tf.transform.rotation)
        t = np.array([tf.transform.translation.x,
                      tf.transform.translation.y,
                      tf.transform.translation.z])
        T = np.eye(4)
        T[:3, :3] = R
        T[:3, 3] = t

        # gabarito de cruzamentos visiveis neste frame
        gt_pix = []
        proj = self._projetar([(c['x'], c['y'], 0.0) for c in self.cruz_gt], T)
        for c, p in zip(self.cruz_gt, proj):
            if p is not None:
                gt_pix.append({'x': p[0], 'y': p[1], 'tipo': c['tipo']})

        det = [{'x': i.center.x, 'y': i.center.y, 'num_rays': i.num_rays}
               for i in msg.intersections]
        tipo_por_raio = {2: 'L', 3: 'T', 4: 'X'}
        for d in det:
            d['tipo'] = tipo_por_raio.get(d['num_rays'])

        # mesma associacao gulosa do evaluate_result.py
        usados = set()
        vp, tipo_ok, erros = 0, 0, []
        for d in det:
            melhor_i, melhor_dist = None, None
            for i, g in enumerate(gt_pix):
                if i in usados:
                    continue
                dist = np.hypot(d['x'] - g['x'], d['y'] - g['y'])
                if dist <= self.tolerancia and (melhor_dist is None or dist < melhor_dist):
                    melhor_dist, melhor_i = dist, i
            if melhor_i is not None:
                usados.add(melhor_i)
                vp += 1
                erros.append(melhor_dist)
                if gt_pix[melhor_i]['tipo'] == d['tipo']:
                    tipo_ok += 1

        fp = len(det) - vp
        fn = len(gt_pix) - vp
        precisao = vp / len(det) if det else float('nan')
        revocacao = vp / len(gt_pix) if gt_pix else float('nan')

        self.registros.append({
            'stamp': msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9,
            'gt': len(gt_pix), 'det': len(det), 'vp': vp, 'fp': fp, 'fn': fn,
            'tipo_ok': tipo_ok, 'precisao': precisao, 'revocacao': revocacao,
            'erro_medio_px': float(np.mean(erros)) if erros else float('nan'),
            'n_segmentos': len(msg.segments),
        })

        self.n += 1
        cada = int(self.get_parameter('resumo_a_cada').value)
        if self.n % cada == 0:
            self._resumo()

    def _resumo(self):
        r = self.registros
        vp = sum(x['vp'] for x in r)
        fp = sum(x['fp'] for x in r)
        fn = sum(x['fn'] for x in r)
        tipo_ok = sum(x['tipo_ok'] for x in r)
        erros = [x['erro_medio_px'] for x in r if not np.isnan(x['erro_medio_px'])]
        p = vp / (vp + fp) if (vp + fp) else 0.0
        rc = vp / (vp + fn) if (vp + fn) else 0.0
        erro = f'{np.mean(erros):.1f}px' if erros else 'n/a'
        self.get_logger().info(
            f'[{self.n} frames] precisao={p:.2f} revocacao={rc:.2f} '
            f'tipo_certo={tipo_ok}/{vp} erro_medio={erro}')

    def salvar(self):
        caminho = self.get_parameter('csv_saida').value
        if not self.registros:
            return
        with open(caminho, 'w', newline='') as f:
            w = csv.DictWriter(f, fieldnames=list(self.registros[0].keys()))
            w.writeheader()
            w.writerows(self.registros)
        self.get_logger().info(f'metricas salvas em {caminho}')


def main(args=None):
    rclpy.init(args=args)
    node = Avaliador()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node._resumo()
        node.salvar()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
