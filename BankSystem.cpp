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

}
