#include "bank.h"
#include <iostream>

using namespace std;

void Bank::createAccount() {
    int accNum;
    string name;
    double initialBalance;

    cout << "Enter Account Number: ";
    cin >> accNum;
    cin.ignore();
    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    accounts.emplace_back(accNum, name, initialBalance);
    cout << "Account created successfully!\n";
}

void Bank::depositMoney() {
    int accNum;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNum;

    for (auto& account : accounts) {
        if (account.getAccountNumber() == accNum) {
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            account.deposit(amount);
            return;
        }
    }
    cout << "Account not found!\n";
}

void Bank::withdrawMoney() {
    int accNum;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNum;

    for (auto& account : accounts) {
        if (account.getAccountNumber() == accNum) {
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;
            account.withdraw(amount);
            return;
        }
    }
    cout << "Account not found!\n";
}

void Bank::displayAccounts() const {
    if (accounts.empty()) {
        cout << "No accounts available.\n";
        return;
    }
    for (const auto& account : accounts) {
        account.displayAccount();
        cout << "----------------------\n";
    }
}
