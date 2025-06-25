#pragma once

#ifdef TLIBRARYDYNAMIC_EXPORTS
#define TLIBRARY_API __declspec(dllexport)
#else
#define TLIBRARY_API __declspec(dllimport)
#endif

#include "Figure.h"

class TLIBRARY_API Triangle : public Figure {
protected:
    int a, b, c;
    int A, B, C;
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    void print_info() const override;
    virtual bool check() const override;
};
