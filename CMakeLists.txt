# Run setenv.bat for setting up env
# and then we can cmake .. -GNinja

cmake_minimum_required (VERSION 2.8)

set(CMAKE_C_COMPILER "D:/LLVM/bin/clang-cl.exe")
set(CMAKE_CXX_COMPILER "D:/LLVM/bin/clang-cl.exe")

project (cs50)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
MESSAGE( STATUS "CMAKE_C_FLAGS: " ${CMAKE_C_FLAGS} )
MESSAGE( STATUS "CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS} )

add_executable(timer timer.cpp)
