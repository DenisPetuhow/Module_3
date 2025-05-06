#include <cmath>
#include "mathden.h"

double Den::sum(double m_number1, double m_number2)
{
    return m_number1 + m_number2;
}

double Den::difference(double m_number1, double m_number2)
{
    return m_number1 - m_number2;
}

double Den::multiplication(double m_number1, double m_number2)
{
    return m_number1 * m_number2;
}

double Den::division(double m_number1, double m_number2)
{
    if (m_number2 == 0)
        return 0; // Лучше обработать ошибку, или бросить исключение!
    return m_number1 / m_number2;
}

double Den::degree(double m_number1, double m_number2)
{
    return pow(m_number1, m_number2);
}
