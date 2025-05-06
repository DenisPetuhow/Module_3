#ifndef MATHDEN_H
#define MATHDEN_H

#include <iostream>
namespace Den
{
    enum class math_operation
    {
        sum = 1,
        difference,
        multiplication,
        division,
        degree
    };
    double sum(double m_number1, double m_number2);
    double difference(double m_number1, double m_number2);
    double multiplication(double m_number1, double m_number2);
    double division(double m_number1, double m_number2);
    double degree(double m_number1, double m_number2);
}


#endif // MATHDEN_H
