#include "Square.h"

Square::Square(int side)
    : Rectanglee(side, side) {
    name = " вадрат";
}

bool Square::check() const {
    return Rectanglee::check();
}