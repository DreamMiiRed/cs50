cmake_minimum_required (VERSION 2.8)
project (wcbound CXX C)

# set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_BUILD_TYPE RelWithDebInfo)
set(CMAKE_BUILD_TYPE Release)

add_executable(bound bound.cpp)
add_executable(intstr intstr.cpp)
add_executable(check1 check1.cpp)

# setenv.bat
# cmake .. -G"Watcom WMake"
# cmake --build .