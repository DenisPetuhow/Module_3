#pragma once
#include "Triangle.h"

#ifdef DYNAMICLIB_EXPORTS
#define IsoscelesTriangle_API __declspec(dllexport)
#else
#define IsoscelesTriangle_API __declspec(dllimport)
#endif

class IsoscelesTriangle_API IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int A, int B);
    bool check() const override;
};
