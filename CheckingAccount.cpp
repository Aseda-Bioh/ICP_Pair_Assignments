#include<iostream>
#include "CheckingAccount.h"
#ifndef CHECKINGACCOUNT_CPP
#define CHECKINGACCOUNT_CPP
using namespace std;

CheckingAccount::CheckingAccount(string accountNumber, string firstName, string lastName, string dob, string gender, string address, string phoneContact, string email, double balance, double transactionFee): Account(accountNumber,firstName,lastName, dob,gender,address,phoneContact, email,balance) {
    this -> transactionFee = transactionFee;
}

void CheckingAccount::credit(double amount) {
    Account::credit(amount);
    Account::debit(transactionFee);
}

void CheckingAccount::debit(double amount) {
    if (amount > getBalance())
    {
        cout << "You do not have enough funds.";
    }

    else {
        Account::debit(amount);
        Account::debit(transactionFee);
    }
}

double CheckingAccount::getTransactionFee() {
    return transactionFee;
}
#endif