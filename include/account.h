#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    int accountNumber;
    std::string holderName;
    double balance;

public:
    Account(int accNum, const std::string& name, double initialBalance);
    void deposit(double amount);
    bool withdraw(double amount);
    void displayAccount() const;
    int getAccountNumber() const;
};

#endif // ACCOUNT_H
