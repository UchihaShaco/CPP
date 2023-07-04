
#include "main.hpp"

Contact::Contact()
{
}
std::string	Contact::get_first_name() const
{
	return (firstName);
}

std::string	Contact::get_last_name() const
{
	return (lastName);
}

std::string	Contact::get_nickName() const
{
	return (nickName);
}

std::string	Contact::get_phone_number() const
{
	return (phoneNumber);
}

std::string	Contact::get_darkest_secret() const
{
	return (darkestSecret);
}

void Contact::ft_set_values(std::string f, std::string l, std::string n, std::string ph, std::string d) 
{
	firstName = f;
	lastName = l;
	nickName = n;
	phoneNumber = ph;
	darkestSecret = d;
}

Contact::~Contact()
{
}