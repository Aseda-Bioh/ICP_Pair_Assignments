#include<iostream>
#include "Customer.h"
#ifndef CUSTOMER_CPP
#define CUSTOMER_CPP
using namespace std;

Customer::Customer(string accountNumber, string firstName, string lastName, string dob, string gender, string address, string phoneContact, string email) {
    this -> accountNumber = accountNumber;
    this ->firstName = firstName;
    this ->lastName = lastName;
    this ->dob = dob;
    this ->gender = gender;
    this ->address = address;
    this ->phoneContact = phoneContact;
    this ->email = email;
}

void Customer::setCustomerDetails(string accountNumber, string firstName, string lastName, string dob, string gender, string address, string phoneContact, string email) {
    this -> accountNumber = accountNumber;
    this ->firstName = firstName;
    this ->lastName = lastName;
    this ->dob = dob;
    this ->gender = gender;
    this ->address = address;
    this ->phoneContact = phoneContact;
    this ->email = email;
}

void Customer::setAccountNumber(string accountNumber) {
    this ->accountNumber = accountNumber;
}

void Customer::setFirstName(string fname) {
    firstName = fname;
}

void Customer::setLastName(string lname) {
    lastName = lname;
}

void Customer::setDOB(string dob) {
    this ->dob = dob;
}

void Customer::setGender(string gender) {
    this ->gender = gender;
}

void Customer::setAddress(string address) {
    this ->address = address;
}

void Customer::setPhoneContact(string phoneContact) {
    this ->phoneContact = phoneContact;
}

void Customer::setEmail(string email) {
    this ->email = email;
}

string Customer::getAccountNumber() {
    return accountNumber;
}

string Customer::getFirstName() {
    return firstName;
}

string Customer::getLastName() {
    return lastName;
}

string Customer::getDOB() {
    return dob;
}

string Customer::getGender() {
    return gender;
}

string Customer::getAddress() {
    return address;
}

string Customer::getPhoneContact() {
    return phoneContact;
}

string Customer::getEmail() {
    return email;
}
#endif
