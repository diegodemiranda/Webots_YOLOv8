from setuptools import find_packages
from setuptools import setup

setup(
    name='soccer_model_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('soccer_model_msgs', 'soccer_model_msgs.*')),
)
