#include "ros/ros.h"

int main(int argc, char **argv){
  ros::init(argc, argv, "get_time");
  ros::NodeHandle n;
  ros::Rate loop_rate(1);
  while(ros::ok()){
    ros::Time time = ros::Time::now();
    printf("%d\n", time);
    loop_rate.sleep();
  }
}
