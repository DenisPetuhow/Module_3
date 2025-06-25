#pragma once
#include "Quadrangle.h"

#ifdef DYNAMICLIB_EXPORTS
#define Parallelogram_API __declspec(dllexport)
#else
#define Parallelogram_API __declspec(dllimport)
#endif

class Parallelogram_API Parallelogram : public Quadrangle {
public:
    Parallelogram(int a, int b, int A, int B);
    bool check() const override;
};
