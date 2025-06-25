#pragma once


#ifdef DYNAMICLIB_EXPORTS
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif

#include <string>

class Figure_API Figure {
protected:
    int sides_count;
    std::string name;
public:
    Figure();
    virtual void print_info() const;
    virtual bool check() const;
    virtual ~Figure();
};
