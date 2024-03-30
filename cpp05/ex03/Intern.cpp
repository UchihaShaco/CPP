
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &other)
{
    (void)other;
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
    if (formName == "shrubbery creation")
    {
        return makeShrubberyCreationForm(target);
    }
    else if (formName == "robotomy request")
    {
        return makeRobotomyRequestForm(target);
    }
    else if (formName == "presidential pardon")
    {
        return makePresidentialPardonForm(target);
    }
    else
    {
        std::cout << "Error: Unknown form name" << std::endl;
        return nullptr;
    }
}

AForm *Intern::makeShrubberyCreationForm(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomyRequestForm(const std::string &target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidentialPardonForm(const std::string &target)
{
    return new PresidentialPardonForm(target);
}
