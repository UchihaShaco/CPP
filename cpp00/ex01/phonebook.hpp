#pragma once

#include "main.hpp"


class PhoneBook 
{
private:
    Contact contacts[8];
    int contactCount;

public:
PhoneBook();

~PhoneBook();

void addContact();
void searchContact();

int getContactCount() const;
void incrementContactCount();

int getContactCount(const PhoneBook& phoneBook);

};
/*
*/