#include "Controller.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "View.h"
#include <locale>

// Запускает основное взаимодействие
void Controller::run() {
    std::setlocale(LC_CTYPE, "rus");
    Triangle triangle("Треугольник", 10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);

    Quadrangle quadrangle("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    View::print_info(&triangle);
    View::print_info(&rightTriangle);
    View::print_info(&isoscelesTriangle);
    View::print_info(&equilateralTriangle);

    View::print_info(&quadrangle);
    View::print_info(&rectangle);
    View::print_info(&square);
    View::print_info(&parallelogram);
    View::print_info(&rhombus);
}