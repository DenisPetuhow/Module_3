#pragma once
#include "Figure.h"

#ifdef DYNAMICLIB_EXPORTS
#define Quadrangle_API __declspec(dllexport)
#else
#define Quadrangle_API __declspec(dllimport)
#endif

class Quadrangle_API Quadrangle : public Figure {
protected:
    int a, b, c, d;
    int A, B, C, D;
public:
    Quadrangle(int a, int b, int c, int d,
        int A, int B, int C, int D);
    void print_info() const override;
    virtual bool check() const override;
};

