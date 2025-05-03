#include <iostream>
#include <Windows.h>
#include <stdexcept>

static int my_gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
class Fraction
{
private:
    int numerator_;
    int denominator_;
    void reduce()
    {
         int gcd = my_gcd(numerator_, denominator_);
        numerator_ /= gcd;
        denominator_ /= gcd;
        if (denominator_ < 0) {
            numerator_ = -numerator_;
            denominator_ = -denominator_;
        }
    }

public:
    Fraction(int m_numerator, int m_denominator) : numerator_(m_numerator), denominator_(m_denominator) {
        if (m_denominator == 0) {
            throw std::invalid_argument("Знаменатель не может быть равен 0");
        }
        reduce();
    }
    Fraction operator + (const Fraction& other) const {
        int num = numerator_ * other.denominator_ + other.numerator_ * denominator_;
        int den = denominator_ * other.denominator_;
        return Fraction(num, den);
    }
    Fraction operator - (const Fraction& other) const {
        int num = numerator_ * other.denominator_ - other.numerator_ * denominator_;
        int den = denominator_ * other.denominator_;
        return Fraction(num, den);
    }
    Fraction operator * (const Fraction& other) const {
        int num = numerator_ * other.numerator_;
        int den = denominator_ * other.denominator_;
        return Fraction(num, den);
    }
    Fraction operator / (const Fraction& other) const {
        if (other.numerator_ == 0) {
            throw std::invalid_argument("Деление на дробь с нулевым числителем недопустимо");
        }
        int num = numerator_ * other.denominator_;
        int den = denominator_ * other.numerator_;
        return Fraction(num, den);
    }
    Fraction operator-() const { return Fraction(-numerator_, denominator_); }
    Fraction& operator++() {
        numerator_ += denominator_;
        reduce();
        return *this;
    }
    Fraction operator++(int) {
        Fraction temp = *this;
        numerator_ += denominator_;
        reduce();
        return temp;
    }
    Fraction& operator--() {
        numerator_ -= denominator_;
        reduce();
        return *this;
    }
    Fraction operator--(int) {
        Fraction temp = *this;
        numerator_ -= denominator_;
        reduce();
        return temp;
    }
    void print() const { std::cout << numerator_ << '/' << denominator_; }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int answer{};
    do {
        int numerator1{}, denominator1{}, numerator2{}, denominator2{};
        std::cout << "Введите числитель дроби первого числа: ";
        std::cin >> numerator1;
        std::cout << "Введите знаменатель дроби первого числа: ";
        std::cin >> denominator1;
        std::cout << "Введите числитель дроби второго числа: ";
        std::cin >> numerator2;
        std::cout << "Введите знаменатель дроби второго числа: ";
        std::cin >> denominator2;
        try {
            Fraction number1{ numerator1, denominator1 };
            Fraction number2{ numerator2, denominator2 };
            number1.print(); std::cout << " + "; number2.print(); std::cout << " = "; (number1 + number2).print(); std::cout << '\n';
            number1.print(); std::cout << " - "; number2.print(); std::cout << " = "; (number1 - number2).print(); std::cout << '\n';
            number1.print(); std::cout << " * "; number2.print(); std::cout << " = "; (number1 * number2).print(); std::cout << '\n';
            number1.print(); std::cout << " / "; number2.print(); std::cout << " = "; (number1 / number2).print(); std::cout << '\n';
            std::cout << "Унарный минус дроби 1: -("; number1.print(); std::cout << ") = "; (-number1).print(); std::cout << '\n';

            Fraction copy{ 1, 1 };
            copy = number1;
            std::cout << "++"; copy.print(); std::cout << " * "; number2.print(); std::cout << " = "; (++copy * number2).print(); std::cout << '\n';
            std::cout << "Значение дроби 1 = "; copy.print(); std::cout << '\n';
            copy = number1;
            copy.print(); std::cout << "++ * "; number2.print(); std::cout << " = "; (copy++ * number2).print(); std::cout << '\n';
            std::cout << "Значение дроби 1 = "; copy.print(); std::cout << '\n';
            copy = number1;
            std::cout << "--"; copy.print(); std::cout << " * "; number2.print(); std::cout << " = "; (--copy * number2).print(); std::cout << '\n';
            std::cout << "Значение дроби 1 = "; copy.print(); std::cout << '\n';
            copy = number1;
            copy.print(); std::cout << "-- * "; number2.print(); std::cout << " = "; (copy-- * number2).print(); std::cout << '\n';
            std::cout << "Значение дроби 1 = "; copy.print(); std::cout << '\n';
        }
        catch (const std::exception& ex) {
            std::cout << "Ошибка: " << ex.what() << std::endl;
        }
        std::cout << "Введите 1, чтобы продолжить сравнение новых чисел иначе 0: ";
        std::cin >> answer;
    } while (answer);
    std::cout << "Конец выполнения программы" << std::endl;
    return 0;
}