from setuptools import find_packages
from setuptools import setup

setup(
    name='assignment2_custom_msg',
    version='0.0.0',
    packages=find_packages(
        include=('assignment2_custom_msg', 'assignment2_custom_msg.*')),
)
