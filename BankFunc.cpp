#include "BankSystem.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

BankSystem::BankFunc() : accountCount(0) {}

void BankSystem::addAccount(Account* account) {
    if (accountCount < MAX_ACCOUNTS) {
        accounts[accountCount++] = account;
        saveAccountsToFile();
    } else {
        std::cout << "Maximum number of accounts reached.\n";
    }
}

void BankSystem::updateAccount(const std::string& accountNumber, double amount, bool isCredit) {
    for (int i = 0; i < accountCount; i++) {
        if (accounts[i]->getAccountNumber() == accountNumber) {
            if (isCredit) {
                accounts[i]->credit(amount);
            } else {
                accounts[i]->debit(amount);
            }
            saveAccountsToFile();
            
            // Save transaction
            std::ofstream transactionFile("transactions.txt", std::ios::app);
            if (transactionFile.is_open()) {
                time_t now = time(0);
                char* dt = ctime(&now);
                transactionFile << accountNumber << "," << amount << "," 
                                << (isCredit ? "Credit" : "Debit") << "," << dt;
                transactionFile.close();
            }
            break;
        }
    }
}

void BankSystem::generateReport(const std::string& startDate, const std::string& endDate) {
    std::cout << "Customer Report from " << startDate << " to " << endDate << "\n";
    std::cout << "---------------------------------------------\n";
    
    for (int i = 0; i < accountCount; i++) {
        std::cout << "Account Number: " << accounts[i]->getAccountNumber() << "\n";
        std::cout << "Name: " << accounts[i]->getFirstName() << " " << accounts[i]->getLastName() << "\n";
        std::cout << "Balance: $" << accounts[i]->getBalance() << "\n";
        std::cout << "Transactions:\n";
        
        std::ifstream file("transactions.txt");
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string accNum, amount, type, date;
            std::getline(iss, accNum, ',');
            std::getline(iss, amount, ',');
            std::getline(iss, type, ',');
            std::getline(iss, date);
            
            if (accNum == accounts[i]->getAccountNumber() && date >= startDate && date <= endDate) {
                std::cout << "  " << type << ": $" << amount << " on " << date;
            }
        }
        file.close();
        std::cout << "\n\n";
    }
}

void BankSystem::loadAccountsFromFile() {
    std::ifstream file("accounts.txt");
    std::string line;
    
    while (std::getline(file, line) && accountCount < MAX_ACCOUNTS) {
        std::istringstream iss(line);
        std::string accountNumber, firstName, lastName, dob, gender, address, phoneContact, email;
        double balance;
        
        std::getline(iss, accountNumber, ',');
        std::getline(iss, firstName, ',');
        std::getline(iss, lastName, ',');
        std::getline(iss, dob, ',');
        std::getline(iss, gender, ',');
        std::getline(iss, address, ',');
        std::getline(iss, phoneContact, ',');
        std::getline(iss, email, ',');
        iss >> balance;
        
        accounts[accountCount++] = new Account(accountNumber, firstName, lastName, dob, gender, address, phoneContact, email, balance);
    }
    
    file.close();
}

void BankSystem::saveAccountsToFile() {
    std::ofstream file("accounts.txt");
    if (file.is_open()) {
        for (int i = 0; i < accountCount; i++) {
            file << accounts[i]->getAccountNumber() << ","
                 << accounts[i]->getFirstName() << ","
                 << accounts[i]->getLastName() << ","
                 << accounts[i]->getDOB() << ","
                 << accounts[i]->getGender() << ","
                 << accounts[i]->getAddress() << ","
                 << accounts[i]->getPhoneContact() << ","
                 << accounts[i]->getEmail() << ","
                 << accounts[i]->getBalance() << "\n";
        }
        file.close();
    }
}