#pragma once

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif
#include <string>

#include <string>

class MATHPOWERLIBRARY_API Figure {
protected:
    int sides_count;
    std::string name;
public:
    Figure();
    virtual void print_info() const;
    virtual bool check() const;
    virtual ~Figure();
};
