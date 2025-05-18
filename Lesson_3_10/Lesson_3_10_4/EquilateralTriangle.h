#pragma once
#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    explicit EquilateralTriangle(int side);// explicit чтобы предотвратить не€вные автоматические преобразовани€ типов
    // Foo f1(5);     // OK, €вный вызов конструктора а Foo f2 = 5;    // ќшибка! Ќе€вное преобразование не допускаетс€
    bool check() const override;
};

