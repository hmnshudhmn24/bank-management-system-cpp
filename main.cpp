#include "bank.h"
#include <iostream>

using namespace std;

int main() {
    Bank bank;
    int choice;

    do {
        cout << "\nBank Management System\n";
        cout << "1. Create Account\n2. Deposit Money\n3. Withdraw Money\n4. Display Accounts\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: bank.createAccount(); break;
            case 2: bank.depositMoney(); break;
            case 3: bank.withdrawMoney(); break;
            case 4: bank.displayAccounts(); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
