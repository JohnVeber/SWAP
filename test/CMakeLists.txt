cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(tests LANGUAGES C)
add_executable(${PROJECT_NAME} tests.c ../src/swap_func.c ../src/quantity_func.c)