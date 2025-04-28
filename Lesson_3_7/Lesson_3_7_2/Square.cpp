#include "Square.h"
#include <cmath>

Square::Square(double a)
    : Rectangle(a, a)
{
    if (std::abs(a_ - b_) > 0.001 || std::abs(a_ - c_) > 0.001 || std::abs(a_ - d_) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: все стороны должны быть равны");
    }

    name_ = "Квадрат";
}