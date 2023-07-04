#pragma once

#include "main.hpp"


class PhoneBook 
{
private:
    Contact contacts[8];
    int contactCount;

public:
    PhoneBook() : contactCount(0) {}
void addContact();
void searchContact();

int getContactCount() const { return contactCount; }
void incrementContactCount() { contactCount++; }

int getContactCount(const PhoneBook& phoneBook)
{
    return phoneBook.getContactCount();
}

};