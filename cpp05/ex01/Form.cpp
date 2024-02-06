
#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char *Form::FormNotSignedException::what() const throw()
{
    return "Form not signed";
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    _signedStatus = false;
}

Form::~Form()
{
    std::cout << "Form " << _name << " has been destroyed" << std::endl;
}

std::string Form::getName() const
{
    return _name;
}

bool Form::getSignedStatus() const
{
    return _signedStatus;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _signedStatus = true;
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << "Form " << form.getName() << " is " << (form.getSignedStatus() ? "" : "not ") << "signed";
    return os;
}

void Form::signForm(Bureaucrat &bureaucrat)
{
    try
    {
        beSigned(bureaucrat);
        std::cout << bureaucrat.getName() << " signs " << _name << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {
        std::cout << bureaucrat.getName() << " cannot sign " << _name << " because " << e.what() << std::endl;
    }
}
