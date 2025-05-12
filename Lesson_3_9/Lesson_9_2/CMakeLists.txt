cmake_minimum_required(VERSION 3.22.0)

project(geometric_fugires)

   set(SOURCE_files src/main.cpp
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
   set(HEADER_files
       includ/Controller.h
       includ/Figure.h
       includ/Triangle.h
       includ/RightTriangle.h
       includ/IsoscelesTriangle.h
       includ/EquilateralTriangle.h
       includ/Quadrangle.h
       includ/Rectangle.h
       includ/Square.h
       includ/Parallelogram.h
       includ/Rhombus.h
       includ/View.h
   )

   add_executable(geometric_fugires ${SOURCE_files} ${HEADER_files})