#include <iostream>
#include "Customer.h"
#include "Account.h"
#include <fstream>
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

const int MAX_CUSTOMERS = 100;
class BankSystem{
private:
  Customer* customers[MAX_CUSTOMERS];
  int customerCount;
  std::string customerFile = "customers.txt";
  std::string transactionFile = "transactions.txt";



}
