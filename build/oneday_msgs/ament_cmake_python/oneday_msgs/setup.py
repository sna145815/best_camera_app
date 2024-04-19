from setuptools import find_packages
from setuptools import setup

setup(
    name='oneday_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('oneday_msgs', 'oneday_msgs.*')),
)
