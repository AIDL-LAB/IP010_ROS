#include <ros/ros.h>
#include <ros/console.h>
#include <ip010_core/ip010_driver.hpp>

using namespace aidl;

int main (int argc, char **argv) {
    ros::init(argc, argv, "ip010_driver");
    ros::NodeHandle nh;
    ip010BodyNode ip010 = ip010BodyNode(&nh);

	ros::AsyncSpinner spinner(0);
    spinner.start();
	
    ROS_INFO("ip010 Driver Node is started");
	ros::waitForShutdown();
}