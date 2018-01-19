cmake_minimum_required(VERSION 3.9)
project(ex2)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex2
        board.cpp
        board.h
        cell.cpp
        cell.h
        consoleDisplay.cpp
        consoleDisplay.h
        display.h
        game.cpp
        game.h
        human.cpp
        human.h
        logic.cpp
        logic.h
        main.cpp
        regLogic.cpp
        regLogic.h)
