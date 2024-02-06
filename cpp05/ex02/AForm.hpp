#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
    const std::string _name;
    bool _signedStatus;
    const int _gradeToSign;
    const int _gradeToExecute;

public:
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class FormNotSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    Form(std::string name, int gradeToSign, int gradeToExecute);
    ~Form();
    std::string getName() const;
    bool getSignedStatus() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void signForm(Bureaucrat &bureaucrat);

    void beSigned(Bureaucrat &bureaucrat);
};
std::ostream &operator<<(std::ostream &os, const Form &form);