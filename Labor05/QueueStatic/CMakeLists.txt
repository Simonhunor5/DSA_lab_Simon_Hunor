cmake_minimum_required(VERSION 3.17)
project(QueueStatic C)

set(CMAKE_C_STANDARD 99)

add_executable(QueueStatic main.c functions.c functions.h)