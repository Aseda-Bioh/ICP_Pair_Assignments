#include<iostream>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(string accountNumber, string firstName, string lastName, string dob, string gender, string address, string phoneContact, string email, double balance, double transactionFee): Account(accountNumber,firstName,lastName, dob,gender,address,phoneContact, email,balance) {
    this -> transactionFee = transactionFee;
}

void CheckingAccount::credit(double amount) {
    Account::credit(amount);

    if (Account::debit(transactionFee)) {
        std::cout << "Transaction fee of Ghc" << transactionFee << " charged." << std::endl;
    } else {
        std::cout << "Unable to charge transaction fee. Insufficient funds." << std::endl;
    }
}

void CheckingAccount::debit(double amount) {
    if (amount > getBalance())
    {
        Account::debit(amount);
        Account::debit(transactionFee);
    }

    else {
        cout << "You do not have enough funds.";
    }
}
