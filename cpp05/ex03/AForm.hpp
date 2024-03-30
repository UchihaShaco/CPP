#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>


class Bureaucrat;
class AForm
{
private:
    const std::string _name;
    bool _signedStatus;
    const int _gradeToSign;
    const int _gradeToExecute;

public:
    AForm(const std::string &name, int gradeToSign, int gradeToExecute);
    virtual ~AForm();

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

    // Getters
    std::string getName() const;
    bool getSignedStatus() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    // Member functions
    void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(const Bureaucrat &executor) const = 0;
    void setSignedStatus(bool status);
};

std::ostream &operator<<(std::ostream &os, const AForm &form);
#endif
