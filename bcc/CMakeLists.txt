cmake_minimum_required (VERSION 2.8)

set(CMAKE_C_COMPILER "D:/BCC102/bin/bcc32c.exe")
set(CMAKE_CXX_COMPILER "D:/BCC102/bin/bcc32c.exe")

project (bcc)

# set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_BUILD_TYPE RelWithDebInfo)
set(CMAKE_BUILD_TYPE Release)

add_executable(bound bound.cpp)
add_executable(reverse reverse.cpp)
add_executable(stringstream stringstream.cpp)
add_executable(intstr intstr.cpp)
add_executable(class1 class1.cpp)
add_executable(check1 check1.cpp)

# setenv.bat
# cmake .. -G"Borland Makefiles"
# cmake --build .