#pragma once
#include <string>

class Figure {
protected:
    int sides_count;
    std::string name;
public:
    Figure();
    virtual void print_info() const;
    virtual bool check() const;
    virtual ~Figure();
};
