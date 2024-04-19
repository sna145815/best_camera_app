import cv2
import os
import numpy as np

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from std_srvs.srv import Empty
from rclpy.executors import MultiThreadedExecutor
from oneday_msgs.srv import Snapshot
from oneday_msgs.srv import Recoding
from oneday.img_publisher import ImgPublisher
from oneday.edge import ImgEdge
from oneday.imgToGray import ImgToGray

class ImageServiceServer(Node):
    def __init__(self):
        super().__init__('image_service_server')
        self.get_logger().info("Init call!")

        self.image_subscription1 = self.create_subscription(
            Image,
            '/camera',
            self.image_basic_callback,
            10
        )
        self.image_subscription2 = self.create_subscription(
            Image,
            '/img_edge',
            self.image_edge_callback,
            10
        )
        self.image_subscription3 = self.create_subscription(
            Image,
            '/img_gray',
            self.image_gray_callback,
            10
        )
        #스냅샷 서비스 등록
        self.stillshot_service = self.create_service(Snapshot, 'take_stillshot', self.stillshot_callback)
        #레코딩 서비스 등록
        self.recording_service = self.create_service(Recoding, 'recording_control', self.recording_control_callback)

        self.cv_bridge = CvBridge()
        self.basic_img = None
        self.edge_img = None
        self.gray_img = None
        self.recording = False
        self.recording_type = None
        self.recording_frames = []
        self.recording_fourcc = cv2.VideoWriter_fourcc(*'XVID')
        self.recording_out = None

    def image_basic_callback(self, msg):
        if self.recording and self.recording_type == 'basic':
            self.frame = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            self.recording_out.write(self.frame)
        self.basic_img = msg
        self.frame = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        

    def image_edge_callback(self, msg):
        if self.recording and self.recording_type == 'edge':
            self.frame = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            self.recording_out.write(self.frame)
        self.edge_img = msg

    def image_gray_callback(self, msg):
        if self.recording and self.recording_type == 'gray':
            self.frame = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            self.recording_out.write(self.frame)
        self.gray_img = msg

    def stillshot_callback(self, request, response):
    # 요청에 따라 다른 토픽을 구독합니다.
        self.get_logger().info("Callback call!")
        if request.name == 'basic':
            frame = self.cv_bridge.imgmsg_to_cv2(self.basic_img, desired_encoding='bgr8')
            cv2.imwrite('stillshot.png', frame)
            self.get_logger().info("basic SnapShot!!")
        elif request.name == 'edge':
            frame = self.cv_bridge.imgmsg_to_cv2(self.edge_img, desired_encoding='bgr8')
            cv2.imwrite('stillshot.png', frame)
            self.get_logger().info("edge SnapShot!!")
        elif request.name == 'gray':
            frame = self.cv_bridge.imgmsg_to_cv2(self.gray_img, desired_encoding='bgr8')
            cv2.imwrite('stillshot.png', frame)
            self.get_logger().info("gray SnapShot!!")
        else:
            self.get_logger().warn("Invalid mode specified in the request.")

        return response
    
    def recording_control_callback(self, request, response):
        self.get_logger().info("recoding callback!!")
        if request:
            if request.name == 'recording_basic':
                self.recording_type = 'basic'
            elif request.name == 'recording_gray':
                self.recording_type = 'gray'
            elif request.name == 'recording_edge':
                self.recording_type = 'edge'
            elif request.name == 'recording_stop':
                self.recording = False
                self.recording_type = None
                self.recording_out.release()
                self.get_logger().info("Recording stopped!!!!!!!!.")
            else:
                self.get_logger().warn("Invalid recording control command.")
            if self.recording_type:
                self.recording = True
                self.recording_out = cv2.VideoWriter('recording.avi', self.recording_fourcc, 20, (self.frame.shape[1], self.frame.shape[0]))
                self.get_logger().info(f"Recording started for {self.recording_type}.")
        return response




def main():
    rclpy.init()
    node = ImageServiceServer()

    rclpy.spin(node)

    node.destroy_node()
    
    rclpy.shutdown()


if __name__ == '__main__':
    main()
