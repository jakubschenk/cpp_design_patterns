cmake_minimum_required(VERSION 3.28)
project(01_state)

set(CMAKE_CXX_STANDARD 17)

add_executable(01_state main.cpp
        src/State.cpp
        src/State.h
        src/Consumer.cpp
        src/Consumer.h)
