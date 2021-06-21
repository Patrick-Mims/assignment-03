cmake_minimum_required(VERSION 3.20)

project(assignment VERSION 1.0)

include_directories("inc")

configure_file(src/config.h.in inc/config.h)

add_executable(assignment src/main.cc)

target_include_directories(assignment PUBLIC "${PROJECT_BINARY_DIR}")

