cmake_minimum_required (VERSION 2.8)
project (hello_clang CXX C)

# Need to run setenv.bat to init clang env
# then just run cmake .. -GNinja

add_executable(timer timer.cpp)
