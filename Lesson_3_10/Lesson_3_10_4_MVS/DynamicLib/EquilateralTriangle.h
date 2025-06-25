#pragma once
#include "Triangle.h"
   
#ifdef DYNAMICLIB_EXPORTS
#define EquilateralTriangle_API __declspec(dllexport)
#else
#define EquilateralTriangle_API __declspec(dllimport)
#endif

class EquilateralTriangle_API EquilateralTriangle : public Triangle {
public:
    explicit EquilateralTriangle(int side);// explicit чтобы предотвратить не€вные автоматические преобразовани€ типов
    // Foo f1(5);     // OK, €вный вызов конструктора а Foo f2 = 5;    // ќшибка! Ќе€вное преобразование не допускаетс€
    bool check() const override;
};

