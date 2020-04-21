#include"ros/ros.h"
#include"std_msgs/Int32.h"
#include"std_msgs/String.h"
#include<string>
#include<sstream>

void call_back(const std_msgs::Int32::ConstPtr& msg)
{
    ROS_INFO("node_b: %d", msg->data);
    
}

int main(int argc, char** argv)
{
    ros::init(argc,argv, "node_b");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("chatter",10, call_back);

    ros::spin();
    return 0;
}