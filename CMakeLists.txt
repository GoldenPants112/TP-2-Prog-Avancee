cmake_minimum_required(VERSION 3.27)
project(TP_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TP_2
        Forme.cpp
        frome.h
        FullDuration.cpp
        FullDuration.h
        main.cpp
        SecDuration.cpp
        SecDuration.h)
