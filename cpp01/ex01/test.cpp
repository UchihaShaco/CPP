#include <iostream>

int main ()
{
	std::string str;

	std::cin >> str;
	std::cout << str << std::endl;
	// to use a cin after a getline, you need to clear the buffer
	std::cin.clear();
	// to clear the buffer, you need to ignore the max size of the buffer
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "--------------------------------" << std::endl;
	std::getline(std::cin >> std::ws , str);
	std::cout << str << std::endl;
}
