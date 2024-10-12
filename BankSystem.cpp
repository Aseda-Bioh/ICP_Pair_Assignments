#include <iostream>
#include "Customer.h"
#include "Account.h"
#include <fstream>
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

const int MAX_CUSTOMERS = 100;

int main(){
  Customer* customers[MAX_CUSTOMERS];
  int customerCount;
  string customerFile = "customers.txt";
  string transactionFile = "transactions.txt";

  Customer customer1("04245648299934", "Joseph", "Chuku", "1980-08-18","Male", "WR-899-213", "05040209912", "chuku@gmail.com");
  Account account("04245648299934", "Joseph", "Chuku", "1980-08-18","Male", "WR-899-213", "05040209912", "chuku@gmail.com", 5000.00);
  SavingsAccount savingsAccount("04245648299934","Joseph", "Chuku", "1980-08-18","Male", "WR-899-213", "05040209912", "chuku@gmail.com", 5000.00, 0.05);
  CheckingAccount checkingAccount("04245648299934","Joseph", "Chuku", "1980-08-18","Male", "WR-899-213", "05040209912", "chuku@gmail.com", 5000.00, 5.00);

  cout << "Name: " << customer1.getFirstName() << " " << customer1.getLastName() << " Account Number: " << customer1.getAccountNumber();
  cout << "Date of birth: " << customer1.getDOB() << " " << customer1.getLastName() << "Account Number: " << customer1.getAccountNumber();
}
