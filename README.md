# best_camera_app WITH ROS

  # 사용법
-     ros2 launch oneday camera.launch.py 노드들 활성화
  # Node
    ### img_publisher
        웹캠에서 프레임을 읽어 /camera 토픽을 발행
    ### edge
       /camera 토픽을 Sub하여 cannyy_edge필터를 적용하여 /img_edge 토픽을 발행
    ### imgToGray
         /camera 토픽을 Sub하여 흑백필터를 적용하여 /img_gray 토픽을 발행
    ## service Node
      위 3개의 토픽을 구독하고 클라이언트의 call이 있을때마다 request.name의 내용에 따라 분기 처리 하여
      요청에 맞게 각 토픽들이 발행하는 프레임을 스냅샷 혹은 녹화 
    ## Client Call 
-     ros2 service call /take_stillshot oneday_msgs/srv/Snapshot "{name: 'basic'}" : /camera 토픽에서 발행하는 프레임 캡쳐
-     ros2 service call /take_stillshot oneday_msgs/srv/Snapshot "{name: 'gray'}" : /img_gray 토픽에서 발행하는 프레임 캡쳐
-     ros2 service call /take_stillshot oneday_msgs/srv/Snapshot "{name: 'edge'}" : /img_edge 토픽에서 발행하는 프레임 캡쳐
-     ros2 service call /recording_control oneday_msgs/srv/Recoding "{name: 'recording_basic'}" : /camera 토픽에서 발행하는 프레임 녹화 시작
-     ros2 service call /recording_control oneday_msgs/srv/Recoding "{name: 'recording_gray'}" : /img_gray 토픽에서 발행하는 프레임 녹화 시작
-     ros2 service call /recording_control oneday_msgs/srv/Recoding "{name: 'recording_edge'}" : /img_edge 토픽에서 발행하는 프레임 녹화 시작
-     ros2 service call /recording_control oneday_msgs/srv/Recoding "{name: 'recording_stop'}" : 녹화 중지

  ## param
-     filter.yaml , size.yaml 노드 실행시 초기 파람값 설정 파일
  ## srv
-     "Recoding.srv" , "Snapshot.srv" /take_stillshot 서비스와 /recording_control 서비스의 Request 정의

  ## 필터노드추가
1. 새로운 필터 기능 추가를 원한다면 /camera 토픽을 구독하여 사용 해주세요

2. setup.py 파일의 entry_points에 추가할 노드를 추가해주세요

3. 만약 노드에 파라미터초기값을 정해주고싶다면 param 폴더에 yaml파일을 수정 및 추가하여 작성 해주세요.

4. 추가한 노드는 launch폴더에 camera.launch.py에 추가하여 런치를 이용하여 실행 시켜주세요!!
