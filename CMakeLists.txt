cmake_minimum_required(VERSION 3.25)
project(Person5)

set(CMAKE_CXX_STANDARD 17)

add_executable(Person5 main.cpp lib/AbstractName.h lib/Names/RussianName.h lib/Names/EuropeName.h lib/Person.h)
