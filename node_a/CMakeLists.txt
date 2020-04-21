cmake_minimum_required(VERSION 2.8.3)
project(node_a)

set(CMAKE_CXX_FLAGS "-std=c++11")

find_package(catkin REQUIRED COMPONENTS
	roscpp
	std_msgs
	)

catkin_package()

include_directories(
	${catkin_INCLUDE_DIRS}
	)

add_executable(node_a node_a.cpp)
target_link_libraries(node_a ${catkin_LIBRARIES})





















