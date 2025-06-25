#pragma once
#include "Triangle.h"

#ifdef DYNAMICLIB_EXPORTS
#define RightTriangle_API __declspec(dllexport)
#else
#define RightTriangle_API __declspec(dllimport)
#endif

class RightTriangle_API RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B);
    bool check() const override;
};
