cmake_minimum_required (VERSION 2.8)

set(CMAKE_C_COMPILER "D:/LLVM/bin/clang-cl.exe")
set(CMAKE_CXX_COMPILER "D:/LLVM/bin/clang-cl.exe")

project (cs50)

# Need to run setenv.bat to init clang env
# then just run cmake .. -GNinja

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(timer timer.cpp)

# the compiler flags for compiling C sources 
MESSAGE( STATUS "CMAKE_C_FLAGS: " ${CMAKE_C_FLAGS} )

# the compiler flags for compiling C++ sources 
MESSAGE( STATUS "CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS} )