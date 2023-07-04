#include "main.hpp"


 void PhoneBook::addContact() 
	{
        Contact newContact;

		std::string temp;

        std::cout << "Enter first name: ";
        if (!getline(std::cin, temp))
		{
            return; 
        }
		newContact.setFirstName(temp);
        std::cout << "Enter last name: ";
        if (!getline(std::cin, temp))
		{
            return; 
        }
		newContact.setLastName(temp);
        std::cout << "Enter nickName: ";
        if (!getline(std::cin, temp))
		{
            return; 
        }
		newContact.setNickName(temp);
        std::cout << "Enter phone number: ";
        if (!getline(std::cin, temp))
		{
            return; 
        }
		newContact.setPhoneNumber(temp);
        std::cout << "Enter darkest secret: ";
        if (!getline(std::cin, temp))
		{
            return; 
        }
		newContact.setDarkestSecret(temp);
		if (getContactCount() < 8)
 		{
            contacts[getContactCount()] = newContact;
            std::cout << "Contact added successfully." << std::endl;
        }

		else
		{
            contacts[getContactCount() % 8] = newContact;
            std::cout << "Contact replaced the oldest contact." << std::endl;
        }
		incrementContactCount();
    }

  void PhoneBook::searchContact()
	{
        if ( getContactCount() == 0)
		{
            std::cout << "Phone book is empty." << std::endl;
            return;
        }

        std::cout << std::setw(10) << "Index" << "|"
                  << std::setw(10) << "First Name" << "|"
                  << std::setw(10) << "Last Name" << "|"
                  << std::setw(10) << "nickName" << "|" << std::endl;

        for (int i = 0; i < (getContactCount()); i++)
		{
            std::string firstName = contacts[i].get_first_name();
            std::string lastName = contacts[i].get_last_name();
            std::string nickName = contacts[i].get_nickName();

            if (firstName.length() > 10)
			{
                firstName = firstName.substr(0, 9) + ".";
            }

            if (lastName.length() > 10)
			{
                lastName = lastName.substr(0, 9) + ".";
            }

            if (nickName.length() > 10)
			{
                nickName = nickName.substr(0, 9) + ".";
            }

            std::cout << std::setw(10) << i << "|"
                      << std::setw(10) << firstName << "|"
                      << std::setw(10) << lastName << "|"
                      << std::setw(10) << nickName << "|" << std::endl;
        }

        std::cout << "Enter the index of the contact to display: ";
        int index = 0;
        if (!(std::cin >> index))
		{
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }

        if (index >= 0 && index < getContactCount())
		{
            std::cout << "First Name: " << contacts[index].get_first_name() << std::endl;
            std::cout << "Last Name: " << contacts[index].get_last_name() << std::endl;
            std::cout << "nickName: " << contacts[index].get_nickName() << std::endl;
            std::cout << "Phone Number: " << contacts[index].get_phone_number() << std::endl;
            std::cout << "Darkest Secret: " << contacts[index].get_darkest_secret() << std::endl;
        }
		else
		{
            std::cout << "Invalid index." << std::endl;
        }
    }