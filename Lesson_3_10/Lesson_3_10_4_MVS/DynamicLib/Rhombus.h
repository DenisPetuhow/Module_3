#pragma once
#include "Parallelogram.h"

#ifdef DYNAMICLIB_EXPORTS
#define Rhombus_API __declspec(dllexport)
#else
#define Rhombus_API __declspec(dllimport)
#endif

class Rhombus_API Rhombus : public Parallelogram {
public:
    Rhombus(int a, int A, int B);
    bool check() const override;
};

