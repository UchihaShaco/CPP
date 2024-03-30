
#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;
class AForm;
class Form;
class Intern
{
private:
    std::string _name;
    std::string _target;

public:
    Intern();
    ~Intern();
    Intern &operator=(const Intern &other);
    Intern(const Intern &other);

    AForm *makeForm(const std::string &formName, const std::string &target);
    AForm *makeShrubberyCreationForm(const std::string &target);
    AForm *makeRobotomyRequestForm(const std::string &target);
    AForm *makePresidentialPardonForm(const std::string &target);
};