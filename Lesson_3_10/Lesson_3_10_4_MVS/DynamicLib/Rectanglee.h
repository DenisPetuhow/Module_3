#pragma once
#include "Quadrangle.h"

#ifdef DYNAMICLIB_EXPORTS
#define Rect_API __declspec(dllexport)
#else
#define Rect_API __declspec(dllimport)
#endif

class  Rect_API Rectanglee : public Quadrangle {
public:
    Rectanglee(int a, int b);
    bool check() const override;
};