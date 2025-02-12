# Bank Management System

A simple **C++ Bank Management System** that allows users to:

- Create an account
- Deposit money
- Withdraw money
- Display all accounts

## Project Structure
```
bank_management_system/
│── include/
│   ├── account.h
│   ├── bank.h
│── src/
│   ├── account.cpp
│   ├── bank.cpp
│── main.cpp
│── README.md
```

## How to Compile and Run
1. Open a terminal and navigate to the project directory.
2. Compile the project using:
   ```sh
   g++ main.cpp src/account.cpp src/bank.cpp -o bank_management
   ```
3. Run the executable:
   ```sh
   ./bank_management
   ```

## Requirements
- C++ compiler (GCC, Clang, MSVC)
