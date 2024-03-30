#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <stdexcept>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
    Bureaucrat b("Bureaucrat", 1);
    ShrubberyCreationForm f("shurbbery");
    try
    {
        std::cout << f << "This is shurbbery" <<std::endl;
        f.beSigned(b);
        f.execute(b);
    }
    catch (std::exception &e)
    {
        std::cout << "Error1: " << e.what() << std::endl;
        std::cerr << e.what() << std::endl;
    }

    // testing now the PresidentialPardonForm
    PresidentialPardonForm f2("PresidentialPardonForm");
    try
    {
        std::cout << f2 << "This is presid" <<std::endl;
        f2.beSigned(b);
        f2.execute(b);
    }
    catch (std::exception &e)
    {
        std::cout << "Error2: " << e.what() << std::endl;
        std::cerr << e.what() << std::endl;
    }

    // testing now the RobotomyRequestForm

    RobotomyRequestForm f3("RobotomyRequestForm");
    try
    {
        std::cout << f3 << "This is robotomy" <<std::endl;
        f3.beSigned(b);
        f3.execute(b);
    }
    catch (std::exception &e)
    {
        std::cout << "Error3: " << e.what() << std::endl;
        std::cerr << e.what() << std::endl;
    }


    
    return 0;
}
