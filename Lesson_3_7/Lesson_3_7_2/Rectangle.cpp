#include "Rectangle.h"
#include <cmath>

Rectangle::Rectangle(double a, double b)
    : Quadrangle(a, b, a, b, 90, 90, 90, 90)
{
    if (std::abs(a_ - c_) > 0.001 || std::abs(b_ - d_) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: противоположные стороны должны быть равны");
    }

    if (std::abs(A_ - 90) > 0.001 || std::abs(B_ - 90) > 0.001 ||
        std::abs(C_ - 90) > 0.001 || std::abs(D_ - 90) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: все углы должны быть равны 90 градусов");
    }

    name_ = "Прямоугольник";
}
