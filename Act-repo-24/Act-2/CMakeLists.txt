cmake_minimum_required(VERSION 3.25)
project(Act_2 C)

set(CMAKE_C_STANDARD 11)

add_executable(Act_2 usepq.c datatypes.h datatypes.c priorityqueue.h priorityqueue.c)
