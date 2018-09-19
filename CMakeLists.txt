cmake_minimum_required(VERSION 3.12)
project(cppFormater)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/../)

set(CMAKE_CXX_STANDARD 11)

find_package (Threads)

set(INCLUDE_FILES cppFormater.h)

set(SOURCE_FILES cppFormater.cpp)

ADD_LIBRARY(cppFormater STATIC ${SOURCE_FILES})

install (TARGETS cppFormater DESTINATION lib)

INSTALL(FILES ${INCLUDE_FILES} DESTINATION include/cppFormater)