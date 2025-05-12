   cmake_minimum_required(VERSION 3.10)
   project(FiguresMVC)
   set(CMAKE_CXX_STANDARD 17)

   include_directories(${CMAKE_SOURCE_DIR}/include)  # Для заголовков

   add_executable(FiguresMVC
       src/main.cpp
       src/Figure.cpp
       src/Triangle.cpp
       src/RightTriangle.cpp
       src/IsoscelesTriangle.cpp
       src/EquilateralTriangle.cpp
       src/Quadrangle.cpp
       src/Rectangle.cpp
       src/Square.cpp
       src/Parallelogram.cpp
       src/Rhombus.cpp
       src/View.cpp
       src/Controller.cpp
   )