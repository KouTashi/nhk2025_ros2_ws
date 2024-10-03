from setuptools import find_packages
from setuptools import setup

setup(
    name='wit_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('wit_msgs', 'wit_msgs.*')),
)
