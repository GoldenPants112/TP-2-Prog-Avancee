cmake_minimum_required(VERSION 3.27)
project(TP_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TP_2
        C++/Exo1/Forme.cpp
        C++/Exo1/frome.h
        C++/Exo2/FullDuration.cpp
        C++/Exo2/FullDuration.h
        C++/main.cpp
        C++/Exo2/SecDuration.cpp
        C++/Exo2/SecDuration.h
        C++/Exo3/Calendar.cpp
        C++/Exo3/Calendar.h
        C++/Exo3/Day.h
        C++/Exo3/Day.cpp
        C++/Exo3/Month.h
        C++/Exo3/Month.cpp)
