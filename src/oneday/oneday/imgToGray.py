import cv2

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

class ImgToGray(Node):
    def __init__(self):
        super().__init__('img_to_gray')

        self.declare_parameter('camera_topic', '/camera')

        self.img_subscriber = self.create_subscription(
            Image,
            '/camera', 
            self.image_callback,
            10
        )

        self.img_control = self.create_publisher(Image, '/img_gray', 10)

        self.cv_bridge = CvBridge()

    def image_callback(self, msg):
        img = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        gray_img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

        pub_img = self.cv_bridge.cv2_to_imgmsg(gray_img, "mono8")
        self.img_control.publish(pub_img)

def main():
    rclpy.init()

    node = ImgToGray()

    rclpy.spin(node)

    node.destroy_node()
    
    rclpy.shutdown()
