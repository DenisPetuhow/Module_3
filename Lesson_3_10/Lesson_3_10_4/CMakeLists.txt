cmake_minimum_required(VERSION 3.22.0)
project(UsingCmakeDynamic)
set(SOURCE_files
       Figure.cpp
       Triangle.cpp
       RightTriangle.cpp
       IsoscelesTriangle.cpp
       EquilateralTriangle.cpp
       Quadrangle.cpp
       Rectangle.cpp
       Square.cpp
       Parallelogram.cpp
       Rhombus.cpp
)

set(HEADER_files
       Figure.h
       Triangle.h
       RightTriangle.h
       IsoscelesTriangle.h
       EquilateralTriangle.h
       Quadrangle.h
       Rectangle.h
       Square.h
       Parallelogram.h
       Rhombus.h
)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(DynamicLib SHARED ${SOURCE_files} ${HEADER_files})
add_executable(UsingCmakeDynamicExe main.cpp)
target_link_libraries(UsingCmakeDynamicExe DynamicLib)
