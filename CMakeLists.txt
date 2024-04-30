cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(hello LANGUAGES C)
add_executable(swap ./src/swap.c ./src/swap_func.c)