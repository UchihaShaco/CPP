#include "AForm.hpp"

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute) :
    _name(name), _signedStatus(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {}

AForm::~AForm() 
{
    std::cout << this->_name << ": destructor called for AForm abstract class" << std::endl;
}

std::string AForm::getName() const
{
    return _name;
}

bool AForm::getSignedStatus() const
{
    return _signedStatus;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "AForm exception, Grade is too low";
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "AForm exception, Grade is too high";
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return "AForm exception, Form not signed";
}


void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    _signedStatus = true;
}

void AForm::setSignedStatus(bool status)
{
    _signedStatus = status;
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
    os << "Form: " << form.getName() << ", Grade to sign: " << form.getGradeToSign() << ", Grade to execute: " << form.getGradeToExecute() << ", Signed: " << form.getSignedStatus();
    return os;
}



