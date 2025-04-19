#include <cmath>
#include "mathden.h"

void Den::sum(double m_number1, double m_number2)
{
    std::cout << m_number1 << " прибавить " << m_number2 << " = " << m_number1 + m_number2 << std::endl;
};

void Den::different(double m_number1, double m_number2)
{
    std::cout << m_number1 << " вычесть " << m_number2 << " = " << m_number1 - m_number2 << std::endl;
};

void Den::multiplication(double m_number1, double m_number2)
{
    std::cout << m_number1 << " умножить на  " << m_number2 << " = " << m_number1 * m_number2 << std::endl;
};

void Den::division(double m_number1, double m_number2)
{
    std::cout << m_number1 << " разделить на " << m_number2 << " = " << m_number1 / m_number2 << std::endl;
};

void Den::degree(double m_number1, double m_number2)
{
    std::cout << m_number1 << " в степени " << m_number2 << " = " << pow(m_number1, m_number2) << std::endl;
};
