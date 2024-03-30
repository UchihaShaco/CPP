
#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm;
class PresidentialPardonForm : public AForm
{
private:
    std::string _target;

public:
    PresidentialPardonForm(const std::string &target);
    ~PresidentialPardonForm();

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };


    // operator
    
    void execute(const Bureaucrat &executor) const;
};
    std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &form);
