#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B)
    : Triangle(a, b, a, A, B, A) {
    name = "Равнобедренный треугольник";
}

bool IsoscelesTriangle::check() const {
    return (Triangle::check() && a == c && A == C);
}
