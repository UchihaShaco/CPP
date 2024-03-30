#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <stdexcept>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf)
    {
        Bureaucrat b("Bureaucrat", 1);
        rrf->beSigned(b);
        rrf->execute(b);
    }
    delete rrf;
// testing all other forms

    AForm* scf;
    scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    if (scf)
    {
        Bureaucrat b("Bureaucrat", 1);
        scf->beSigned(b);
        scf->execute(b);
    }
    delete scf;

    AForm* ppf;
    ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
    if (ppf)
    {
        Bureaucrat b("Bureaucrat", 1);
        ppf->beSigned(b);
        ppf->execute(b);
    }
    delete ppf;

    return 0;



}
