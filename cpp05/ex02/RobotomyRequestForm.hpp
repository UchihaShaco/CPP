
#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class AForm;
class Bureaucrat;
class RobotomyRequestForm : public AForm
{
private:
    std::string _target;
    

public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();

    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &other);

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

    void beSigned(Bureaucrat &bureaucrat);


};
