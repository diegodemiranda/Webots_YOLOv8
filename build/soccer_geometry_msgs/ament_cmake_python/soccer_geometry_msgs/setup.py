from setuptools import find_packages
from setuptools import setup

setup(
    name='soccer_geometry_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('soccer_geometry_msgs', 'soccer_geometry_msgs.*')),
)
