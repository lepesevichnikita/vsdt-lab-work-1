cmake_minimum_required (VERSION 3.13)
project (lab1)

set (lab1_VERSION_MAJOR 1)
set (lab1_VERSION_MINOR 0)

configure_file (
  "${PROJECT_SOURCE_DIR}/lab1Config.h.in"
  "${PROJECT_BINARY_DIR}/lab1Config.h"
  )

include_directories("${PROJECT_BINARY_DIR}")

add_executable (lab1 lab1.cpp lab1.h)
