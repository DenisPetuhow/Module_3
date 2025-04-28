#include "FigureException.h"

FigureException::FigureException(const std::string& setError) : error{ setError }
{
}

const char* FigureException::what() const noexcept
{
    return error.c_str();
}