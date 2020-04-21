cmake_minimum_required(VERSION 2.8.3)
project(node_b)

set(CMAKE_CXX_FLAGS "-std=c++11")

find_package(catkin REQUIRED COMPONENTS
	roscpp
	std_msgs
	)

catkin_package()

include_directories(
	${catkin_INCLUDE_DIRS}
	)

add_executable(node_b node_b.cpp)
target_link_libraries(node_b ${catkin_LIBRARIES})



















