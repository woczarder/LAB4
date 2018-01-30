cmake_minimum_required(VERSION 3.8)
project(lab4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp User.cpp User.h UserManager.cpp UserManager.h Order.cpp Order.h)
add_executable(lab4 ${SOURCE_FILES})