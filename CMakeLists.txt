cmake_minimum_required(VERSION 3.28)
project(hello)

set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")


add_executable(hello main.c
        confuzzle.c
        confuzzle.h)
	
