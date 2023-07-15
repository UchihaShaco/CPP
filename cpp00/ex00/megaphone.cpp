#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" + std::string("\n");
	}
	else
	{
		std::string str;
		int i = 1;
		while (i < argc)
		{
			str += std::string(argv[i]);
			i++;
		}

		std::size_t j = 0;
		while (str[j])
		{
			str[j] = std::toupper(str[j]);
			j++;
		}

		std::cout << str + "\n";
	}
	return 0;
}
