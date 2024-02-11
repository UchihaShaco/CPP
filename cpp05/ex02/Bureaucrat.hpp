#pragma once
#include "AForm.hpp"
#include <iostream>
#include <stdexcept>
class AForm;
class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
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

    Bureaucrat(const std::string &name, int grade);
    ~Bureaucrat();

    const std::string &getName() const;
    int getGrade() const;
    void signForm(AForm &form);
    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

// to copy everything from current directory to ../ex02 use the following command in the terminal: cp * ../ex02