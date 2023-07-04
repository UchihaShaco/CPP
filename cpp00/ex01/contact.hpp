#pragma once

# include "main.hpp"

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:

// Prototype of the constructor
	Contact();
	
	// Alternative definition of the constructor:
	//Contact(std::string f, std::string l, std::string n, std::string ph, std::string d);
	
	// Prototype of the destructor
	~Contact();

	void ft_set_values(std::string f, std::string l, std::string n, std::string ph, std::string d);

	std::string	get_first_name() const;
	std::string	get_last_name() const;
	std::string	get_nickName() const;
	std::string	get_phone_number() const;
	std::string	get_darkest_secret() const;
	
	void setFirstName(const std::string& name)
    {
        firstName = name;
    }

	void setLastName(const std::string& name)
	{
		lastName = name;
	}

	void setNickName(const std::string& name)
	{
		nickName = name;
	}

	void setPhoneNumber(const std::string& name)
	{
		phoneNumber = name;
	}

	void setDarkestSecret(const std::string& name)
	{
		darkestSecret = name;
	}

	
};

