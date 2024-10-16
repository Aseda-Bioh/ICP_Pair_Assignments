#include <iostream>
#include "Customer.h"
#include "Account.h"
#include <fstream>
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "BankFunc.h"
#ifndef BANKSYSTEM_CPP
#define BANKSYSTEM_CPP
using namespace std;

int main(){
  Customer customer1("04245648299934", "Joseph", "Chuku", "1980-08-18","Male", "WR-899-213", "05040209912", "chuku@gmail.com");
  Account account1("04245648299934", "Joseph", "Chuku", "1980-08-18","Male", "WR-899-213", "05040209912", "chuku@gmail.com", 5000.00);
  Account account2("01277924000923", "Hazel", "Holloway", "2003-12-03","Female", "AR-012-670", "02022188847", "holloway@gmail.com", 50000.00);
  SavingsAccount savingsAccount("04245648299934","Joseph", "Chuku", "1980-08-18","Male", "WR-899-213", "05040209912", "chuku@gmail.com", 10000.00, 0.05);
  CheckingAccount checkingAccount("04245648299934","Joseph", "Chuku", "1980-08-18","Male", "WR-899-213", "05040209912", "chuku@gmail.com", 8000.00, 5.00);

  /*
  cout << "Name: " << customer1.getFirstName() << " " << customer1.getLastName() << ", Account Number: " << customer1.getAccountNumber();
  cout << ", Date of birth: " << customer1.getDOB() << ", Address: " << customer1.getAddress() << ", Email: " << customer1.getEmail() << ", Gender: " << customer1.getGender();
  cout << ", Phone Contact: " << customer1.getPhoneContact();

  cout << endl;
  cout << endl;

  customer1.setCustomerDetails("94820288492821","Aseda", "Bioh","2004-03-02","Male","ER-583-493","0503838221","bioh@gmail.com");

  cout << "After setting different values to the member variables:";
  cout << endl;

  cout << "Name: " << customer1.getFirstName() << " " << customer1.getLastName() << ", Account Number: " << customer1.getAccountNumber();
  cout << ", Date of birth: " << customer1.getDOB() << ", Address: " << customer1.getAddress() << ", Email: " << customer1.getEmail() << ", Gender: " << customer1.getGender();
  cout << ", Phone Contact: " << customer1.getPhoneContact();
  */

  /*
  account.credit(500.00);
  cout << "Your new balance is " << account.getBalance();

  cout << endl;
  cout << endl;

  account.debit(200.00);
  cout << "After debiting, your new balance is " << account.getBalance();
  */

  /*
  double interest = savingsAccount.calculateInterest();
  savingsAccount.credit(interest);

  cout << "Your savings account was credited with an interest of Ghc" << interest << ", so your new balance is " << savingsAccount.getBalance() << endl;

  checkingAccount.credit(700.00);

  cout << "Your account was credited. You were charged Ghc " << checkingAccount.getTransactionFee() << " for this transaction, and your new balance is Ghc " << checkingAccount.getBalance() <<endl;

  checkingAccount.debit(300.00);

  cout << "Your account was debited. You were charged Ghc " << checkingAccount.getTransactionFee() << " for this transaction, and your new balance is Ghc " << checkingAccount.getBalance() <<endl;
  */

  BankFunc bankfunction;
  bankfunction.addAccount(&account1);
  bankfunction.addAccount(&account2);

  bankfunction.updateAccount("04245648299934", 250.00, false);
  bankfunction.updateAccount("01277924000923",50000.00, true); 
  bankfunction.generateReport("2024-10-13", "2024-10-13"); 
  return 0;
}
#endif


