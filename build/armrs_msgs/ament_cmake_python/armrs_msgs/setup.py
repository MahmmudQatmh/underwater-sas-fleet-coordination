from setuptools import find_packages
from setuptools import setup

setup(
    name='armrs_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('armrs_msgs', 'armrs_msgs.*')),
)
