#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	test(void)
{
	try
	{
    	Intern  someRandomIntern;
    	Form*   rrf;
		Bureaucrat	hi("hi", 40);
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		hi.signForm(*rrf);
		hi.executeForm(*rrf);

		delete rrf;

		rrf = someRandomIntern.makeForm("shrubbery creation", "pre pa");
		hi.signForm(*rrf);
		hi.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	test();
	system("leaks Bureaucrat");
	return 0;
}
