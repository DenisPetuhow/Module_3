#include <iostream>
#include <string>
#include <Windows.h>

// ��������� ��� �������� ���������� � ���������� �����
struct BankAccount
{
    int accountNumber;       // ����� �����
    std::string ownerName;   // ��� ���������
    double balance;          // ������
};

// ������� ��� ��������� ������� ����� (������ ��������� ����� ������ ��� ��������)
void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main()
{
    SetConsoleCP(1251);         // ��� ��������� ������� �������� � �������
    SetConsoleOutputCP(1251);

    BankAccount userAccount;

    // ��������� ������ ������������
    std::cout << "������� ����� �����: ";
    std::cin >> userAccount.accountNumber;

    std::cin.ignore(); // ������� ������� ����� ������ ����� cin
    std::cout << "������� ��� ���������: ";
    std::getline(std::cin, userAccount.ownerName);

    std::cout << "������� ��������� ������: ";
    std::cin >> userAccount.balance;

    // ������ �� ��������� �������
    std::cout << "�� ������ �������� ������? (y / n): ";
    char choice;
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        double newBalance;
        std::cout << "������� ����� ������: ";
        std::cin >> newBalance;

        changeBalance(userAccount, newBalance); // ����� ������� � ����� �����������
    }

    // ����� ���������� ����������
    std::cout << "��� ����: " << userAccount.ownerName << ", "
        << userAccount.accountNumber << ", "
        << userAccount.balance << std::endl;

    return 0;
}