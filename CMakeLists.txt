cmake_minimum_required(VERSION 3.23)
project(C___Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(C___Project main.cpp Airlines.cpp Airlines.h Airports.cpp Airports.h Routes.cpp Routes.h BFS.cpp BFS.h Node.cpp Node.h DataExtraction.cpp DataExtraction.h)
