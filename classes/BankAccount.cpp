#include "BankAccount.h"
#include <iostream>

using namespace std;

BankAccount::BankAccount(float balance) {
    this->balance = balance;
}

void BankAccount::withdraw(float amount) {
    if (amount > balance) {
        cout << "Insufficient funds" << endl;
    } else {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    }
}
void BankAccount::deposit(float amount) {
    balance += amount;
    cout << "Deposited: " << amount << endl;
}
