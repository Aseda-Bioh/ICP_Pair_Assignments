#include<iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(int accountNumber, string firstName, string lastName, string dob, string gender, string address, int phoneContact, string email, double balance, float interestRate): Account(accountNumber, firstName, lastName, dob, gender, address, phoneContact, email, balance) {
    this -> interestRate = interestRate;
}

void SavingsAccount::interestEarned() {
    if (getBalance != 0) {
        double interest = getBalance() * interestRate * interestTimePeriod;
        deposit(interest);
    }

    else {
        cout << "There's no money in your account.";
    }
}