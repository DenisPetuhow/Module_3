#pragma once
#include <string>

class Figure {
protected:
    std::string name_;
public:
    Figure(const std::string& name);
    virtual std::string name() const;
    virtual void print_sides() const = 0;
    virtual void print_angles() const = 0;
    virtual ~Figure() = default;
};