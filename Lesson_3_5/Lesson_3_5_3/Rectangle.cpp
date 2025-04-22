#include "Rectangle.h"

Rectangle::Rectangle(int a, int b)
    : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
    name = "Прямоугольник";
}

bool Rectangle::check() const {
    return (Quadrangle::check() &&
        a == c && b == d &&
        A == 90 && B == 90 && C == 90 && D == 90);
}
