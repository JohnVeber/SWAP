cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(hello LANGUAGES C)
add_executable(test_1 test_1.c ../src/swap_func.c)