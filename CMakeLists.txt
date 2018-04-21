cmake_minimum_required(VERSION 3.6)
project(Number)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Number.h Irrational.h Complex.h Rational.h Rational.cpp Real.h Number.cpp Complex.cpp Real.cpp Irrational.cpp)
add_executable(Number ${SOURCE_FILES})