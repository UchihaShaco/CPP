
#include "main.hpp"

int main()
{
    PhoneBook phoneBook;
    while (true) 
	{
        std::string command;
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))                                              
		{
            break; 
    	}

        if (command == "ADD")
		{
            phoneBook.addContact();
        }
			else if (command == "SEARCH")
		{
            phoneBook.searchContact();
        } 
			else if (command == "EXIT")
		{
            break;
        }
			else
		{
            std::cout << "Invalid command." << std::endl;
        }
    }

    return 0;
}

