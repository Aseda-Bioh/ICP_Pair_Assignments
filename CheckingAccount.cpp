#include<iostream>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(int accountNumber, string accountHolder, double balance, double transactionFee): Account(accountNumber,accountHolder,balance) {
    this -> transactionFee = transactionFee;
}

void CheckingAccount::deposit(double amount) {
    Account::deposit(amount);
    if (Account::withdraw(transactionFee)) {
        std::cout << "Transaction fee of Ghc" << transactionFee << " charged." << std::endl;
    } else {
        std::cout << "Unable to charge transaction fee. Insufficient funds." << std::endl;
    }
}

void CheckingAccount::withdraw(double amount) {
    if (getBalance() - amount >= 0)
    {
        Account::withdraw(amount);
        Account::withdraw(transactionFee);
    }

    else {
        cout << "You do not have enough funds.";
    }
}
