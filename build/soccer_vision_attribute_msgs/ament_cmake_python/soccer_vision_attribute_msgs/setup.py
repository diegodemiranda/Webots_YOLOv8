from setuptools import find_packages
from setuptools import setup

setup(
    name='soccer_vision_attribute_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('soccer_vision_attribute_msgs', 'soccer_vision_attribute_msgs.*')),
)
