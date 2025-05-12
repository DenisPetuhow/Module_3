#include "View.h"
#include <iostream>

// Выводит информацию о фигуре (MVC: View)
void View::print_info(Figure* figure) {
    std::cout << figure->get_name() << ":" << std::endl;
    figure->print_sides();
    figure->print_angles();
    std::cout << std::endl;
}