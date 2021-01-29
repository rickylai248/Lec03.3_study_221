cmake_minimum_required(VERSION 3.17)
project(src)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(src
        .idea/.gitignore
        .idea/workspace.xml
        DLLOps.cpp
        DLLOps.h
        LLOps.cpp
        LLOps.h
        main.cpp
        NodeDLL.cpp
        NodeDLL.h
        NodeLL.cpp
        NodeLL.h)
