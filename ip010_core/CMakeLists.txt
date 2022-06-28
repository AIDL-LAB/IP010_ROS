cmake_minimum_required(VERSION 3.0.2)
project(ip010_core)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  tf
  nav_msgs
  ip010_msgs
)

catkin_package(
 LIBRARIES ip010_core
 CATKIN_DEPENDS roscpp std_msgs tf nav_msgs
)

include_directories(
  include 
  ${catkin_INCLUDE_DIRS}
)

add_executable(ip010_driver src/ip010_driver.cpp)
target_link_libraries(ip010_driver ${catkin_LIBRARIES} )
