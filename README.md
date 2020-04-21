# ROS_nodes_example
This is a simple example to show how ros to achieve communication between nodes, Publisher: node_a, Subscriber: node_b, and the message is just number.

# How to run this example?
## Create your ros work sapce first and compile ROS_nodes_example.

`mkdir -p ~/catkin_ws/src`

`cd ~/catkin_ws/src`

`git clone https://github.com/CLM666/ROS_nodes_example.git`

`cd ~/catkin_ws`

`catkin_make`

`source devel/setup.bash`

## Use launch to run this example.

`cd ~/catkin_ws`

`source devel/setup.bash`

`roslaunch node_a run.launch`
