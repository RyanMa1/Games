cmake_minimum_required(VERSION 3.13)
project(Games)

set(CMAKE_CXX_STANDARD 14)

add_executable(Games main.cpp ConnectN.cpp ConnectN.h Player.cpp Player.h Board.cpp Board.h Move.cpp Move.h)