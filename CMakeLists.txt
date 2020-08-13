cmake_minimum_required(VERSION 3.13)
project(ConnectN)

set(CMAKE_CXX_STANDARD 14)

add_executable(ConnectN main.cpp ConnectN.cpp ConnectN.h Player.cpp Player.h Board.cpp Board.h Move.cpp Move.h)