#pragma once
#include <string>

class Figure {
protected:
    std::string name;

public:
    Figure(const std::string& name);
    virtual std::string get_name() const;
    virtual void print_sides() const = 0;
    virtual void print_angles() const = 0;
    virtual ~Figure() = default;
};