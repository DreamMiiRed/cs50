cmake_minimum_required(VERSION 2.8)
project(app)

# Compiler configuration
if (CMAKE_VERSION VERSION_LESS "3.1")
  if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    # set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++1y")
  endif ()
else ()
  # set (CMAKE_CXX_STANDARD 11)
  set (CMAKE_CXX_STANDARD 14)
endif ()

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_BUILD_TYPE RelWithDebInfo)
# set(CMAKE_BUILD_TYPE Release)

#find_package(glfw3 3.2 REQUIRED)
#find_package(OpenGL REQUIRED)

add_library(learn STATIC learn.cpp)

add_executable(app main.cpp)

set_property(TARGET app PROPERTY CXX_STANDARD 11)

target_link_libraries(app learn)

add_executable(array array.cpp)
add_executable(array_more array_more.cpp)
add_executable(array2d array2d.cpp)
add_executable(array_foreach array_foreach.cpp)
add_executable(array_vector array_vector.cpp)
add_executable(array_lower_bound array_lower_bound.cpp)
add_executable(array_reverse array_reverse.cpp)

add_executable(binary_count binary_count.cpp)

add_executable(getline_cin getline_cin.cpp)

add_executable(map map.cpp)

add_executable(class_inheritance class_inheritance.cpp)
add_executable(class_abstract class_abstract.cpp)
add_executable(class_object class_object.cpp)
add_executable(class_operator class_operator.cpp)

add_executable(linked_list linked_list.cpp)

add_executable(timer timer.cpp)

add_executable(stringstream stringstream.cpp)
add_executable(tag_parser tag_parser.cpp)

#target_include_directories(app PRIVATE ${OPENGL_INCLUDE_DIR})
#target_link_libraries(app ${OPENGL_gl_LIBRARY} -static)

#target_link_libraries(app glfw3 -static)
