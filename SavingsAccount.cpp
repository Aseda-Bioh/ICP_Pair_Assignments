#include<iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(string accountNumber, string firstName, string lastName, string dob, string gender, string address, string phoneContact, string email, double balance, float interestRate): Account(accountNumber, firstName, lastName, dob, gender, address, phoneContact, email, balance) {
    this -> interestRate = interestRate;
}

double SavingsAccount::calculateInterest() {
    if (getBalance != 0) {
        double interest = getBalance() * interestRate;
        return interest;
    }

    else {
        cout << "There's no money in your account.";
    }
}