#include "print_info.h"
#include <iostream>

void print_info(const Figure* fig) {
    std::cout << fig->name() << " создан" << std::endl;
    fig->print_sides();
    fig->print_angles();
    std::cout << std::endl;
}