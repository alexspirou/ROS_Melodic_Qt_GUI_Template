#include "_ros.h"
#include "std_msgs/UInt16.h"

_Ros::_Ros()
{
    n = new ros::NodeHandle();
    turtle_move = n->advertise<geometry_msgs::Twist>(turtle +"/cmd_vel", 200);
    linear_x = 1;
}
_Ros::~_Ros()
{
    ros::Duration(0.1).sleep();
    ros::spinOnce();
    delete n;
}
void _Ros::twist_publisher()
{
    turtle_move.publish(twist_msg);
}



