#include <iostream>
#include <Windows.h>

class Fraction
{
private:
    int numerator_;
    int denominator_;
public:
    Fraction(int m_numerator, int m_denominator) : numerator_(m_numerator), denominator_(m_denominator) {}

    bool operator == (const Fraction& other) const {
        return numerator_ * other.denominator_ == denominator_ * other.numerator_;
    }
    bool operator != (const Fraction& other) const { //“ак как мы уже переопределили ==  то просто берем обратное значение оператора ==(1) передаем через
        // разоменование и this первый аргумент и other 2 аргумент и оператор == выводит решение и ! берет обратное
        return !(*this == other);
    }
    bool operator > (const Fraction& other) const {
        return numerator_ * other.denominator_ > denominator_ * other.numerator_;
    }
    bool operator <= (const Fraction& other) const {
        return !(*this > other);
    }

    bool operator < (const Fraction& other) const {
        return numerator_ * other.denominator_ < denominator_ * other.numerator_;
    }
    bool operator >= (const Fraction& other) const {
        return !(*this < other);
    }
    Fraction& operator = (const Fraction& other) { // & необходим дл€ цепочек
        numerator_ = other.numerator_;
        denominator_ = other.denominator_;
        return *this;
    }

    friend std::ostream& operator << (std::ostream& out, const Fraction& fraction) { // ѕерегрузка вывода
        out << fraction.numerator_ << "/" << fraction.denominator_;
        return out;
    }
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    bool answer{};
    do {
        int numerator1{}, denominator1{}, numerator2{}, denominator2{};
        std::cout << "¬ведите числитель дроби первого числа: ";
        std::cin >> numerator1;
        std::cout << "¬ведите знаменатель дроби первого числа: ";
        std::cin >> denominator1;
        std::cout << "¬ведите числитель дроби второго числа: ";
        std::cin >> numerator2;
        std::cout << "¬ведите знаменатель дроби второго числа: ";
        std::cin >> denominator2;

        Fraction number1{ numerator1, denominator1 };
        Fraction number2{ numerator2, denominator2 };
        std::cout << "number1 " << ((number1 == number2) ? "== " : "not == ") << "number2 " << std::endl;
        std::cout << "number1 " << ((number1 != number2) ? "!= " : "not != ") << "number2 " << std::endl;
        std::cout << "number1 " << ((number1 > number2) ? "> " : "not > ") << "number2 " << std::endl;
        std::cout << "number1 " << ((number1 <= number2) ? "<= " : "not <= ") << "number2 " << std::endl;
        std::cout << "number1 " << ((number1 < number2) ? "< " : "not < ") << "number2 " << std::endl;
        std::cout << "number1 " << ((number1 >= number2) ? ">= " : "not >= ") << "number2 " << std::endl;
        number1 = number2;
            std::cout << "number1 " << number1 << std::endl;
        std::cout << "¬ведите 1, чтобы продолжить сравнение новых чисел иначе 0: ";
        std::cin >> answer;
    } while (answer);
    std::cout << " онец выполнени€ программы" << std::endl;
    return 0;
}
