#ifndef BANK_H
#define BANK_H

#include "account.h"
#include <vector>

class Bank {
private:
    std::vector<Account> accounts;

public:
    void createAccount();
    void depositMoney();
    void withdrawMoney();
    void displayAccounts() const;
};

#endif // BANK_H
