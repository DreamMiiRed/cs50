cmake_minimum_required (VERSION 2.8)

set(CMAKE_C_COMPILER "D:/BCC102/bin/bcc32c.exe")
set(CMAKE_CXX_COMPILER "D:/BCC102/bin/bcc32c.exe")

project (check1)

# set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_BUILD_TYPE RelWithDebInfo)
set(CMAKE_BUILD_TYPE Release)

add_executable(check1 check1.cpp)
