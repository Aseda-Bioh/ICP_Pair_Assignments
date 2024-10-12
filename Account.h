#include<iostream>
#include "Customer.h"
#ifndef ACCOUNT_H
#define ACCOUNT_H
using namespace std;

class Account: public Customer
{
private:
    double balance;

public:
    Account(string accountNumber, string firstName, string lastName, string dob, string gender, string address, string phoneContact, string email,double balance);
    void credit(double amount);
    void debit(double amount);
    double getBalance();
};
#endif