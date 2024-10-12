#include<iostream>
#include "Account.h"
using namespace std;

class CheckingAccount: public BankAccount
{
private:
    double transactionFee;

public:
    CheckingAccount(int accountNumber, string accountHolder, double balance, double transactionFee);
    void deposit(double amount);
    void withdraw(double amount);
};
