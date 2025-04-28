#include "Figure.h"

Figure::Figure(const std::string& name) : name_(name) {}
std::string Figure::name() const { return name_; }