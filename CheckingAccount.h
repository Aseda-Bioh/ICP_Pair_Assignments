#include<iostream>
#include "Account.h"
using namespace std;

class CheckingAccount: public Account
{
private:
    double transactionFee;

public:
    CheckingAccount(int accountNumber, string firstName, string lastName, string dob, string gender, string address, int phoneContact, string email, double balance, double transactionFee);
    void credit(double amount);
    void debit(double amount);
};
