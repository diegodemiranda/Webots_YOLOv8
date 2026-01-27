from setuptools import find_packages
from setuptools import setup

setup(
    name='soccer_vision_2d_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('soccer_vision_2d_msgs', 'soccer_vision_2d_msgs.*')),
)
