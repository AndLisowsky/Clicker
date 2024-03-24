cmake_minimum_required(VERSION 3.27)
project(Projekt2_clicker)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Projekt2_clicker
        clicker.cpp
        gamecontroller.cpp
        gamecontroller.h
        gamemodel.cpp
        gamemodel.h
        gameview.cpp
        gameview.h)
