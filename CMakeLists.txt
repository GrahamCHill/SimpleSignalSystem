cmake_minimum_required(VERSION 3.30)
project(metaObjectSystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(metaObjectSystem main.cpp
        metaSystems/Signal.cpp
        metaSystems/Signal.h
        metaSystems/MetaObject.cpp
        metaSystems/MetaObject.h
        TestFiles/Button.cpp
        TestFiles/Button.h
        TestFiles/Dialog.cpp
        TestFiles/Dialog.h)
