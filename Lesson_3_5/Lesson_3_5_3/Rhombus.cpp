#include "Rhombus.h"

Rhombus::Rhombus(int a, int A, int B)
    : Parallelogram(a, a, A, B) {
    name = "Ромб";
}

bool Rhombus::check() const {
    return (Parallelogram::check() &&
        a == b && b == c && c == d);
}