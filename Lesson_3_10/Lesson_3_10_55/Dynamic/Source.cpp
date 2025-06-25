#include <locale>
#include "Figure.h"
#include "Triangle.h"


void print_figure(Figure* f) {
    f->print_info();
}

int main() {
    std::setlocale(LC_CTYPE, "rus");
    Figure f;
    Triangle t(10, 20, 30, 50, 60, 70);
   

    print_figure(&f);
    print_figure(&t);
    
    return 0;
}