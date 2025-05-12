#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B)
    : Quadrangle(a, b, a, b, A, B, A, B) {
    name = "ֿאנאככוכמדנאלל";
}

bool Parallelogram::check() const {
    return (Quadrangle::check() &&
        a == c && b == d &&
        A == C && B == D);
}
