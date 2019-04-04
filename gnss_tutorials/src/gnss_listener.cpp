#include "ros/ros.h"
#include "sensor_msgs/NavSatFix.h"


void baseFixCallback(const sensor_msgs::NavSatFix::ConstPtr& msg)
{
    ROS_INFO("latitude: [%f]", msg->latitude);
    ROS_INFO("longitude: [%f]", msg->longitude);
    ROS_INFO("altitude: [%f]", msg->altitude);
}


void roverFixCallback(const sensor_msgs::NavSatFix::ConstPtr& msg)
{
    ROS_INFO("latitude: [%f]", msg->latitude);
    ROS_INFO("longitude: [%f]", msg->longitude);
    ROS_INFO("altitude: [%f]", msg->altitude);
}


int main(int argc, char **argv)
{
    ros::init(argc, argv, "gnss_listener");
    ros::NodeHandle n;

    ros::Subscriber sub = n.subscribe("rover/fix", 100, roverFixCallback);

    ros::spin();

    return 0;
}