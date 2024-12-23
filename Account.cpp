#include<iostream>
#include "Account.h"
#ifndef ACCOUNT_CPP
#define ACCOUNT_CPP
using namespace std;

Account::Account(string accountNumber, string firstName, string lastName, string dob, string gender, string address, string phoneContact, string email, double balance): Customer(accountNumber, firstName, lastName, dob, gender, address, phoneContact, email) {
    if (balance >= 0.0)
    {
        this -> balance = balance;
    }
    
    else {
        balance = 0.0;
        cout << "Invalid balance entered.";
    }
}

void Account::credit(double amount) {
    if (amount <= 0)
    {
        cout << "Invalid amount.";
    }
    
    else {
        balance += amount;
    }
}

void Account::debit(double amount) {
    if (amount > balance)
    {
        cout << "You do not have enough funds for this transaction.";
    }

    else {
        balance -= amount;
    }
}

double Account::getBalance() {
    return balance;
}
#endif
