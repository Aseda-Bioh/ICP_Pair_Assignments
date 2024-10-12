#include<iostream>
#include "Customer.h"
using namespace std;

class Account: public Customer
{
private:
    double balance;

public:
    Account(string accountNumber, string firstName, string lastName, string dob, string gender, string address, string phoneContact, string email,double balance);
    bool credit(double amount);
    bool debit(double amount);
    double getBalance();
};
