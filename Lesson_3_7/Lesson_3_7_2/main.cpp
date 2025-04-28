#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "print_info.h"
#include "FigureException.h"
#include <iostream>
#include <locale>

int main() {
    std::setlocale(LC_CTYPE, "rus");
    try {
        // Создаем корректный прямоугольный треугольник
        RightTriangle rtri(3, 4, 5, 30, 60);
        print_info(&rtri);

        // Пытаемся создать треугольник с неправильной суммой углов
        Triangle tri(10, 20, 30, 50, 60, 80); // 50 + 60 + 80 = 190, а должно быть 180
        print_info(&tri);
    }
    catch (const FigureException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        // Создаем корректный равнобедренный треугольник
        IsoscelesTriangle itri(10, 15, 50, 80);
        print_info(&itri);

        // Пытаемся создать равносторонний треугольник с некорректной стороной
        EquilateralTriangle etri(-5); // отрицательная сторона
        print_info(&etri);
    }
    catch (const FigureException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        // Создаем корректный квадрат
        Square sq(10);
        print_info(&sq);

        // Пытаемся создать прямоугольник с отрицательной стороной
        Rectangle rect(-10, 20); // это вызовет исключение
        print_info(&rect);
    }
    catch (const FigureException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        // Создаем корректный параллелограмм
        Parallelogram para(20, 30, 60, 120);
        print_info(&para);

        // Пытаемся создать ромб с отрицательной стороной
        Rhombus rh(-30, 60, 120); // это вызовет исключение
        print_info(&rh);
    }
    catch (const FigureException& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
