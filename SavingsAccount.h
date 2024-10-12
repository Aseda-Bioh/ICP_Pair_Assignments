#include<iostream>
#include "Account.h"
#ifndef SAVINGSACCOUNT.H
#define SAVINGSACCOUNT.H
using namespace std;

class SavingsAccount: public Account {
private:
    float interestRate;

public:
    SavingsAccount(int accountNumber, string firstName, string lastName, string dob, string gender, string address, int phoneContact, string email, double balance, float interestRate);
    void calculateInterest();
};
#endif