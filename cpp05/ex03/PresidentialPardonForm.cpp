
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

const char *PresidentialPardonForm::GradeTooHighException::what() const throw()
{
    return "PresidentialPardonForm exception, Grade is too high";
}

const char *PresidentialPardonForm::GradeTooLowException::what() const throw()
{
    return "PresidentialPardonForm exception, Grade is too low";
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &form)
{
    os << "Form: " << form.getName() << ", Grade to sign: " << form.getGradeToSign() << ", Grade to execute: " << form.getGradeToExecute() << ", Signed: " << form.getSignedStatus();
    return os;
}

