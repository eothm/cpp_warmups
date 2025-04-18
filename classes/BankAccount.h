#include <string>
using namespace std;
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
class BankAccount {
    private:
        float balance;
    public:
        BankAccount(float balance);;
        void withdraw(float amount);
        void deposit(float amount);

};
#endif