cmake_minimum_required(VERSION 3.20)

project(assignment VERSION 1.0)

include_directories("inc")

configure_file("${PROJECT_SOURCE_DIR}/src/config.h.in" "${PROJECT_BINARY_DIR}/config.h")
include_directories("${PROJECT_BINARY_DIR}")

add_executable(assignment src/main.cc)

target_include_directories(assignment PUBLIC "${PROJECT_BINARY_DIR}")

