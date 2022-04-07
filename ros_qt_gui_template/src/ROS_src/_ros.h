#ifndef _ROS_H
#define _ROS_H
#include <string>
#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "QDebug"
#include "std_msgs/Int32.h"
#include "turtlesim/Color.h"
#include "turtlesim/Pose.h"
static turtlesim::Pose turtlesim_pose;

class _Ros
{
public:
    _Ros();
    ~_Ros();
    //pose topic
    static void turtlesim_pose_callback(const turtlesim::Pose::ConstPtr& pose_msg){
        turtlesim_pose = *pose_msg;
    }
    void pose_subscriber()
    {
        ros::Rate loop_rate(5);
        pose_sub = n->subscribe(turtle + "/pose",100,turtlesim_pose_callback);
        loop_rate.sleep();
        ros::spinOnce();

    }
    //cmd_vel topic
    void twist_publisher();
    void set_twist(geometry_msgs::Twist twist_input){twist_msg = twist_input;}
    geometry_msgs::Twist get_twist(){return twist_msg;}


    void set_linear_x(float linear_x_input){linear_x = linear_x_input;}
    double get_linear_x(){return linear_x;}

private:
    
    std::string turtle = "/turtle1";
    ros::NodeHandle *n;
    //cmd_vel topic
    ros::Publisher turtle_move ;
    geometry_msgs::Twist twist_msg;
    double linear_x;
    //pose topic
    ros::Subscriber pose_sub;
};

#endif // _ROS_H
