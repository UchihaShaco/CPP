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
