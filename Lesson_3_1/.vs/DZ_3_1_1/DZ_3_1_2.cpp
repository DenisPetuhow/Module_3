#include <iostream>
#include <string>
#include <Windows.h>

// Структура для хранения информации о банковском счёте
struct BankAccount
{
    int accountNumber;       // Номер счёта
    std::string ownerName;   // Имя владельца
    double balance;          // Баланс
};

// Функция для изменения баланса счёта (теперь принимает новый баланс как параметр)
void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main()
{
    SetConsoleCP(1251);         // Для поддержки русских символов в консоли
    SetConsoleOutputCP(1251);

    BankAccount userAccount;

    // Считываем данные пользователя
    std::cout << "Введите номер счёта: ";
    std::cin >> userAccount.accountNumber;

    std::cin.ignore(); // Очистка символа новой строки после cin
    std::cout << "Введите имя владельца: ";
    std::getline(std::cin, userAccount.ownerName);

    std::cout << "Введите начальный баланс: ";
    std::cin >> userAccount.balance;

    // Запрос на изменение баланса
    std::cout << "Вы хотите изменить баланс? (y / n): ";
    char choice;
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        double newBalance;
        std::cout << "Введите новый баланс: ";
        std::cin >> newBalance;

        changeBalance(userAccount, newBalance); // Вызов функции с двумя аргументами
    }

    // Вывод актуальной информации
    std::cout << "Ваш счёт: " << userAccount.ownerName << ", "
        << userAccount.accountNumber << ", "
        << userAccount.balance << std::endl;

    return 0;
}