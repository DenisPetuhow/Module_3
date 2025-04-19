#ifndef MATHDEN_H
#define MATHDEN_H

#include <iostream>
namespace Den
{
    enum math_operation
    {
        сумма = 1,
        вычитание,
        умножение,
        деление,
        степень
    };
    void sum(double m_number1, double m_number2);
    void different(double m_number1, double m_number2);
    void multiplication(double m_number1, double m_number2);
    void division(double m_number1, double m_number2);
    void degree(double m_number1, double m_number2);
}


#endif // MATHDEN_H
