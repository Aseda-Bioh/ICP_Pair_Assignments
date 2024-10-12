#include<iostream>
#ifndef CUSTOMER_H
#define CUSTOMER_H
using namespace std;

class Customer {
private:
    string accountNumber;
    string firstName;
    string lastName;
    string dob;
    string gender;
    string address;
    string phoneContact;
    string email;
public:
    Customer(string accountNumber, string firstName, string lastName, string dob, string gender, string address, string phoneContact, string email);
    void setCustomerDetails(string accountNumber, string firstName, string lastName, string dob, string gender, string address,string phoneContact, string email);
    void setAccountNumber(string accountNumber);
    void setFirstName(string fname);
    void setLastName(string lname);
    void setDOB(string dob);
    void setGender(string gender);
    void setAddress(string address);
    void setPhoneContact(string phoneContact);
    void setEmail(string email);
    string getAccountNumber();
    string getFirstName();
    string getLastName();
    string getDOB();
    string getGender();
    string getAddress();
    string getPhoneContact();
    string getEmail();
};
#endif
