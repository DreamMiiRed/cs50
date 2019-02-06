cmake_minimum_required (VERSION 3.13)
project (hello_module NONE)

include(ProcessorCount)

ProcessorCount(N)
message("Number of processors: ${N}")

include(CMakePrintSystemInformation)


list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/modules")

include(CustomX)
include(namespace_customy)
