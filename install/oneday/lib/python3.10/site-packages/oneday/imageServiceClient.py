import rclpy
from rclpy.node import Node
from oneday_msgs.srv import Snapshot

class ImageServiceClient(Node):
    def __init__(self):
        super().__init__('image_service_client')
        self.client = self.create_client(Snapshot, 'take_snapshot')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')
        self.request_snapshot()

    def request_snapshot(self):
        request = Snapshot.Request()
        request.name = 'shot'  # 'shot'는 서버에서 정의한 요청 모드입니다.
        future = self.client.call_async(request)
        future.add_done_callback(self.handle_response)

    def handle_response(self, future):
        try:
            response = future.result()
            self.get_logger().info('Snapshot captured successfully.')
        except Exception as e:
            self.get_logger().error(f'Service call failed: {e}')

def main():
    rclpy.init()
    node = ImageServiceClient()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
