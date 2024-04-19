from setuptools import find_packages, setup
import glob
import os
package_name = 'oneday'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch',
            glob.glob(os.path.join('launch', '*.launch.py'))),
        ('share/' + package_name + '/param',
            glob.glob(os.path.join('param', '*.yaml'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='jin',
    maintainer_email='jin@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'img_publisher = oneday.img_publisher:main',
            'edge = oneday.edge:main',
            'imgToGray = oneday.imgToGray:main',
            'imageServiceServer = oneday.imageServiceServer:main',
            'imageServiceClient = oneday.imageServiceClient:main'
        ],
    },
)
