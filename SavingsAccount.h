#include<iostream>
#include "Account.h"
#ifndef SAVINGSACCOUNT.H
#define SAVINGSACCOUNT.H
using namespace std;

class SavingsAccount: public Account {
private:
    float interestRate;

public:
    SavingsAccount(string accountNumber, string firstName, string lastName, string dob, string gender, string address, string phoneContact, string email, double balance, float interestRate);
    double calculateInterest();
};
#endif