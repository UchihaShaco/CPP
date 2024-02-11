#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("John Doe", 50);
        Form form("Approval Form", 40, 30);

        std::cout << "Bureaucrat: " << bureaucrat << std::endl;
        std::cout << "Form: " << form << std::endl;

        bureaucrat.signForm(form);

        std::cout << "Form after signing: " << form << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
