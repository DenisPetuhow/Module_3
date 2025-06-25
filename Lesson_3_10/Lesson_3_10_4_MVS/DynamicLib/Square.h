#pragma once
#include "Rectanglee.h"

#ifdef DYNAMICLIB_EXPORTS
#define Square_API __declspec(dllexport)
#else
#define Square_API __declspec(dllimport)
#endif

class Square_API Square : public Rectanglee {
public:
    explicit Square(int side);
    bool check() const override;
};

