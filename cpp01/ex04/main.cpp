#include "main.hpp"

#include <fstream>
#include <iostream>


#include <iostream>

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
}

void Replace::replace()
{
    std::ifstream ifs(this->filename.c_str());
    if (!ifs.is_open())
    {
        std::cout << "Error: Could not open file." << std::endl;
        return;
    }

    std::string line;
    std::string new_filename = this->filename + ".replace";
    std::ofstream ofs(new_filename.c_str());
    if (!ofs.is_open()) 
    {
        std::cout << "Error: Could not create file." << std::endl;
        return;
    }

    while (std::getline(ifs, line))
    {
        std::string newLine;
        size_t pos = 0;
        while (pos < line.length())
        {
            size_t foundPos = line.find(this->s1, pos);
            if (foundPos == std::string::npos)
            {
                newLine += line.substr(pos);
                break;
            }
            newLine += line.substr(pos, foundPos - pos);
            newLine += this->s2;
            pos = foundPos + this->s1.length();
        }
        ofs << newLine << std::endl;
    }

    ifs.close();
    ofs.close();
}


Replace::~Replace()
{
}

int main(int ac, char **argv)
{
    if (ac != 4)
    {
        std::cout << "Error: Wrong number of arguments." << std::endl;
        return (1);
    }
    Replace replace(argv[1], argv[2], argv[3]);
    replace.replace();
    return (0);
}