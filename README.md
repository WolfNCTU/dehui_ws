# dehui_ws
```
git clone https://github.com/WolfNCTU/dehui_ws.git
cp ~/log_data.launch ~/dehui_ws/catkin_ws/src/zed/zed-ros-wrapper/zed_wrapper/launch
cd dehui_ws/catkin_ws
catkin_make
```
Setup environment

## The ROS master is set in zedm01
```
source environment.sh
roscd zed_wrapper/launch
vim log_data.launch
```
Modefy the number of the zedm in ns

Open zedm
```
source ~/dehui_ws/environment.sh
roslaunch zed_wrapper log_data.launch
```
Rosbag

go to zedm01
```
source ~/dehui_ws/environment.sh
roscore
```
Open another terminal in nano
```
cd ~/dehui_ws/rosbag
source rosbag.sh
```
