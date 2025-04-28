#pragma once
#include <exception>
#include <string>

class FigureException : public std::exception
{
private:
    std::string error{};
public:
    FigureException(const std::string& setError);

    const char* what() const noexcept override;
};
