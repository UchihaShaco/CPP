#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>

class AForm;
class Bureaucrat;
class ShrubberyCreationForm : public AForm {
private:
    std::string _target;

public:
    ShrubberyCreationForm(const std::string& target);
    ~ShrubberyCreationForm();

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

    void execute(const Bureaucrat& executor) const;
};

#endif
