cmake_minimum_required(VERSION 3.13)
project(app)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_BUILD_TYPE RelWithDebInfo)
set(CMAKE_BUILD_TYPE Release)

add_executable(lambda lambda.cpp)

add_executable(regex regex.cpp)
# set(CUSTOM_PATH_LIB_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/../../boost/lib)
set(BOOSTPATH D:/boost_1_59_0)
set(BOOSTLIBPATH D:/boost_1_59_0/lib32-msvc-14.0)
# target_link_libraries(regex debug ${CMAKE_CURRENT_SOURCE_DIR}/../../boost/lib/libboost_regex-vc141-mt-gd-x32-1_69.lib optimized ${CMAKE_CURRENT_SOURCE_DIR}/../../boost/lib/libboost_regex-vc141-mt-x32-1_69.lib)
target_link_libraries(regex debug ${BOOSTLIBPATH}/libboost_regex-vc140-mt-gd-1_59.lib optimized ${BOOSTLIBPATH}/libboost_regex-vc140-mt-1_59.lib)


include_directories(${BOOSTPATH})
# link_libraries(${CMAKE_CURRENT_SOURCE_DIR}/../../boost/lib)
