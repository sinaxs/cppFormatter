cmake_minimum_required(VERSION 3.10)
project(cppFormatter)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/../)

set(CMAKE_CXX_STANDARD 11)

find_package (Threads)

set(INCLUDE_FILES cppFormatter.h)

set(SOURCE_FILES cppFormatter.cpp)

ADD_LIBRARY(cppFormatter STATIC ${SOURCE_FILES})

install (TARGETS cppFormatter DESTINATION lib)

INSTALL(FILES ${INCLUDE_FILES} DESTINATION include/cppFormatter)
