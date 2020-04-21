#include"ros/ros.h"
#include"std_msgs/Int32.h"
#include"std_msgs/String.h"
#include<string>
#include<sstream>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "node_a");
    ros::NodeHandle n;
    ros::Publisher num_pub = n.advertise<std_msgs::Int32>("chatter",10);
    ros::Rate loop_rate(10);

    int32_t count=0;
    while(ros::ok())
    {
        std_msgs::Int32 num;
        num.data = count;
        ROS_INFO("node_a: %d",num.data);

        num_pub.publish(num);
        ros::spinOnce();
        loop_rate.sleep();
        ++count;

        if(count > 10)
        {
            ros::shutdown();
        }

    }

    return 0;
}