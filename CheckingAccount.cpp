#include<iostream>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(int accountNumber, string accountHolder, double balance, double transactionFee): Account(accountNumber,accountHolder,balance) {
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
    if (getBalance() - amount >= 0)
    {
        Account::debit(amount);
        Account::debit(transactionFee);
    }

    else {
        cout << "You do not have enough funds.";
    }
}
