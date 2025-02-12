#include "account.h"
#include <iostream>

using namespace std;

Account::Account(int accNum, const std::string& name, double initialBalance)
    : accountNumber(accNum), holderName(name), balance(initialBalance) {}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful! New balance: $" << balance << "\n";
    } else {
        cout << "Invalid deposit amount!\n";
    }
}

bool Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful! New balance: $" << balance << "\n";
        return true;
    } else {
        cout << "Invalid withdrawal amount or insufficient funds!\n";
        return false;
    }
}

void Account::displayAccount() const {
    cout << "Account Number: " << accountNumber << "\n";
    cout << "Holder Name: " << holderName << "\n";
    cout << "Balance: $" << balance << "\n";
}

int Account::getAccountNumber() const {
    return accountNumber;
}
