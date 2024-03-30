
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}


void RobotomyRequestForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw AForm::GradeTooLowException();
    this->setSignedStatus(true);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (!this->getSignedStatus() || executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    
    std::cout << "executing RobotomyRequestForm" << std::endl;
    if (rand() % 2)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << _target << " robotomization failed" << std::endl;
}

const char *RobotomyRequestForm::GradeTooHighException::what() const throw()
{
    return "RobotomyRequestForm exception, Grade is too high";
}

const char *RobotomyRequestForm::GradeTooLowException::what() const throw()
{
    return "RobotomyRequestForm exception, Grade is too low";
}

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &form)
{
    os << "Form: " << form.getName() << ", Grade to sign: " << form.getGradeToSign() << ", Grade to execute: " << form.getGradeToExecute() << ", Signed: " << form.getSignedStatus();
    return os;
}


RobotomyRequestForm::~RobotomyRequestForm() {}
