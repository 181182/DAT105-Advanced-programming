cmake_minimum_required(VERSION 3.9)
project(PriorityQueue1)

set(CMAKE_CXX_STANDARD 14)

add_executable(PriorityQueue1 main.cpp edge.h graph.h graphadt.h node.h PriorityQueue.cpp PriorityQueue.h)