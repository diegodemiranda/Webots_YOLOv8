# Testando o Segmentation_for_robocup no Webots

Arquivos adicionados a este pacote para rodar o algoritmo de segmentação
clássica (OpenCV) dentro da simulação.

```
Webots_YOLOv8/
├── segment_adapter.py          ponte entre o main.py e o ROS
├── segmentation_simulation.py  o nó ROS
├── calibrar_cores_webots.py    calibração de cor
└── avaliar_segmentacao.py      validação quantitativa
```

O algoritmo **não mora aqui**. Ele fica no repositório
`Segmentation_for_robocup`, carregado em tempo de execução por caminho — assim
editar o `main.py` vale na hora, sem recompilar nada.

---

## Como rodar

Três terminais. **Todos** começam com o `source` do workspace. Para não digitar
sempre:

```bash
echo 'source ~/ros2_ws/install/setup.bash' >> ~/.bashrc
```

### 1. Simulação

```bash
source ~/ros2_ws/install/setup.bash
ros2 launch my_package robot_launch.py
```

Espere o console do Webots mostrar `'AUREA' extern controller: connected.`
Antes disso aparecem linhas de `retrying` — é normal.

### 2. Calibração de cor (primeira vez, ou se mudar campo/iluminação)

```bash
source ~/ros2_ws/install/setup.bash
ros2 run Webots_YOLOv8 calibrar --ros-args -p modo:=roi -p n_frames:=15
```

Coleta 15 frames, depois abre duas janelas:

- **carpete verde**: retângulo grande, sem encostar em linha branca nem sombra
- **linha branca**: retângulo pequeno e fino, dentro da espessura da linha

Gera `~/ros2_ws/calibracao/green_pixels_webots.csv`.

### 3. Segmentação

```bash
source ~/ros2_ws/install/setup.bash

ros2 run Webots_YOLOv8 segmentation --ros-args \
  -p caminho_main:=$HOME/Segmentation_for_robocup/main.py \
  -p lut_verde_csv:=$HOME/ros2_ws/calibracao/green_pixels_webots.csv \
  -p branco_lower:="[0,0,200]" \
  -p branco_up:="[179,40,255]" \
  -p dilatar_s:=8 \
  -p dilatar_v:=15
```

Abre a janela `segmentacao`: vermelho = linhas, amarelo = borda do campo,
laranja/rosa/azul = cruzamentos L/T/X.

### Movimentar o robô (opcional)

```bash
source ~/ros2_ws/install/setup.bash
ros2 run my_package keyboard_teleop
```

---

## Ajustando os parâmetros

| parâmetro | padrão | efeito |
|---|---|---|
| `dilatar_s` / `dilatar_v` | 6 / 10 | alarga a LUT verde. Alto demais faz os anúncios do fundo virarem campo |
| `tpix` | 20 | limiar por célula do grid. Menor = detecta linhas mais fracas |
| `trow` | 10000 | quanta atividade a linha do grid precisa pra virar borda de campo |
| `twin` | 3000 | limiar da janela 4×8 |
| `branco_lower` / `branco_up` | — | faixa HSV do branco, vinda da calibração |

**Ajuste fora da simulação, é muito mais rápido.** Salve um frame pelo botão
"Save current image (CTRL+S)" da janela `segmentacao` e teste combinações na
mesma imagem:

```python
import sys, cv2
sys.path.insert(0, '/home/user/ros2_ws/src/Webots_YOLOv8')
from Webots_YOLOv8.segment_adapter import SegmentadorDeFrame

seg = SegmentadorDeFrame(
    caminho_main='/home/user/Segmentation_for_robocup/main.py',
    lut_verde_csv='/home/user/ros2_ws/calibracao/green_pixels_webots.csv',
    branco_lower=(0, 0, 200), branco_up=(179, 40, 255),
    dilatar_s=8, dilatar_v=15,
)

r = seg.processar(cv2.imread('/home/user/frame.png'))
print('linhas:', len(r['linhas']), '| cruzamentos:', len(r['cruzamentos']))
cv2.imshow('resultado', r['debug']); cv2.waitKey(0)
```

Assim você compara parâmetros na mesma cena. Testando direto na simulação, cada
execução pega um frame diferente e você confunde o efeito do parâmetro com a
mudança de cena.

---

## O que cada arquivo faz

### `segment_adapter.py`

A ponte. Não é nó ROS, é módulo Python usado pelo nó.

Existe porque o `main.py` não roda dentro de um nó ROS por três motivos:

| problema | efeito |
|---|---|
| `load_image()` usa `np.fromfile` + `imdecode` | só aceita caminho de arquivo, não o frame do `cv_bridge` |
| `debug()` usa `cv2.waitKey(0)` | trava o callback do subscriber pra sempre |
| `import def_white_threshold` lê `white_pixels.csv` com caminho relativo | quebra porque o `cwd` do nó não é a pasta do repositório |

O adaptador resolve os três **sem editar o repositório da segmentação**: importa
o `main.py` por caminho, cria uma subclasse que aceita frame numpy, chama o
pipeline sem nenhuma janela, e injeta um `def_white_threshold` falso no
`sys.modules` com os limiares da calibração.

Ele também **força o processamento em 752×480**, resolução em que os limiares
foram tunados. Isso importa: o `trow` é uma soma absoluta sobre a linha do grid,
então em 1080×720 o mesmo valor vira um teste 1,4× mais permissivo. E os
parâmetros geométricos (`dist_maxima`, `comprimento_minimo`, etc.) estão em
células de grid, cobrindo menos ângulo conforme a resolução sobe. O adaptador
reescala o frame, roda, e devolve as coordenadas no espaço original.

### `segmentation_simulation.py`

O nó ROS. Assina `/AUREA/camera_optical_frame/image_color`, chama o adaptador e
publica as detecções em `markings_in_image` e `field_boundary_in_image`.
Descarta frames quando o pipeline atrasa, em vez de acumular fila.

Para depurar a olho, o `r['obj']` devolvido pelo adaptador dá acesso às máscaras
intermediárias: `obj.green_mask`, `obj.white_mask`, `obj.borda_binaria`,
`obj.skeleton_img`.

### `calibrar_cores_webots.py`

**Rode antes de qualquer outra coisa.** É o passo que decide se o pipeline
detecta algo ou devolve zero linha em silêncio.

A `green_pixels.csv` do repositório não é uma faixa HSV: é uma lista de triplas
(H,S,V) **exatas** amostradas das imagens de tuning. Se o verde do simulador
cair fora dela, a `green_mask` sai zerada, a `borda_binaria` fica vazia e o
pipeline devolve nada — **sem lançar exceção**. O sintoma é "não detecta", não
um traceback.

Conferindo se a calibração ficou boa:

| indicador | bom | ruim |
|---|---|---|
| amostras brancas | alguns milhares | 100 mil+ (retângulo pegou demais) |
| saturação máx. do branco | abaixo de 40 | acima de 80 (pegou verde) |
| `branco_up` brilho | perto de 255 | 238 ou menos (região pequena demais) |

O aviso "poucas triplas de verde" foi calibrado para fotos reais. No Webots o
verde é quase uniforme (194 triplas, H entre 56 e 58) e isso está correto — é
para isso que serve a dilatação em S e V.

### `avaliar_segmentacao.py`

Validação quantitativa: projeta a geometria conhecida do campo pela câmera real
a cada frame e compara com o detectado, usando a mesma métrica do
`simulation/evaluate_result.py` do repositório da segmentação. Reporta precisão,
revocação, acerto de tipo (L/T/X) e erro médio em pixel.

```bash
ros2 run Webots_YOLOv8 avaliar --ros-args -p tolerancia_px:=25
```

Exige `supervisor TRUE` no nó `Robot` do `.wbt` e a TF `map → base_link`
publicada pelo driver — sem pose verdadeira não há gabarito.

---

## Testando outro algoritmo OpenCV

O algoritmo é carregado por caminho, não é pacote ROS. Para trocar de versão,
basta apontar para outra pasta:

```bash
-p caminho_main:=$HOME/segmentacao_v2/main.py
```

Para um algoritmo com interface diferente, copie o `segment_adapter.py` e troque
o miolo do `processar()`. O `segmentation_simulation.py` só depende do formato
de retorno:

```python
{
    'linhas':      [((x1,y1),(x2,y2)), ...],   # pixel do frame original
    'cruzamentos': [{'x','y','tipo','num_rays'}, ...],
    'borda_campo': [(x,y), ...],
    'debug':       frame_bgr_com_overlay,
}
```

Mantido esse contrato, o resto continua valendo sem alteração.

---

## Armadilhas do ambiente

Encontradas em Ubuntu 24.04 / ROS 2 Jazzy.

**Pacotes do pip atropelando os do sistema.** Mordeu duas vezes:

| pacote | versão | o que quebrou |
|---|---|---|
| `setuptools` | 84.0.0 | `colcon build` com `option --editable not recognized` |
| `opencv-python` | 5.0.0 | `cv_bridge` com `KeyError: 16` ao publicar imagem |

Conserto: `pip3 uninstall --break-system-packages <pacote>` e
`sudo apt install python3-<pacote>`. Prefira sempre o apt.

**`Package 'Webots_YOLOv8' not found`** depois de compilar: falta o marcador no
índice.

```bash
mkdir -p src/Webots_YOLOv8/resource
touch src/Webots_YOLOv8/resource/Webots_YOLOv8
colcon build --packages-select Webots_YOLOv8 --symlink-install
```

**Não versione `build/`, `install/` e `log/`** — contêm caminhos absolutos da
máquina de origem.

---

## Compilando

```bash
cd ~/ros2_ws
colcon build --symlink-install
source install/setup.bash
```

Com `--symlink-install`, editar um `.py` em `src/` vale na hora. Só mudanças no
`setup.py` ou `package.xml` exigem recompilar.