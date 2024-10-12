#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

class BankFunc {
private:
    static const int MAX_ACCOUNTS = 100;
    Account* accounts[MAX_ACCOUNTS];
    int accountCount;

public:
    BankSystem();
    void addAccount(Account* account);
    void updateAccount(const std::string& accountNumber, double amount, bool isCredit);
    void generateReport(const std::string& startDate, const std::string& endDate);
    void loadAccountsFromFile();
    void saveAccountsToFile();
};