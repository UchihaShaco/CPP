#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat goodBureaucrat("John Doe", 50);
        std::cout << goodBureaucrat << std::endl;

        // creating  a bureaucrat with bad grade too low
        try
        {
            Bureaucrat highGradeBureaucrat("Alice", 0); // This should throw GradeTooHighException
        }
        catch (const Bureaucrat::GradeTooHighException &e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
        std::cout << "----------------------------------------" << std::endl;
        // Attempt to create a bureaucrat with an invalid grade (too low)
        try
        {
            Bureaucrat lowGradeBureaucrat("Bob", 200); // This should throw GradeTooLowException
        }
        catch (const Bureaucrat::GradeTooLowException &e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
        std::cout << "----------------------------------------" << std::endl;
        // Modify the grade of the bureaucrat
        goodBureaucrat.incrementGrade(); // Decrease grade
        std::cout << goodBureaucrat << std::endl;
        std::cout << "----------------------------------------" << std::endl;

        // increase grade  after allowed range
        try
        {
            for (int i = 0; i < 160; ++i)
            {
                goodBureaucrat.incrementGrade();
            }
        }
        catch (const Bureaucrat::GradeTooHighException &e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        std::cout << "----------------------------------------" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Unhandled Exception: " << e.what() << std::endl;
    }

    return 0;
}
