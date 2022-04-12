#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm	sh("shhhh"); // 145 137
	RobotomyRequestForm		ro("bobobo"); // 72 45
	PresidentialPardonForm	pr("pr"); // 25 5

	Bureaucrat				hi("hi", 70);
	Bureaucrat				king("king", 1);
	

	hi.signForm(sh);
	hi.executeForm(sh);
	hi.signForm(ro);
	hi.executeForm(ro);
	hi.signForm(pr);
	hi.executeForm(pr);

	std::cout << pr << std::endl;

	std::cout << std::endl;
	std::cout << "========================" << std::endl;
	std::cout << std::endl;

	king.signForm(sh);
	king.executeForm(sh);
	king.signForm(ro);
	king.executeForm(ro);
	king.signForm(pr);
	king.executeForm(pr);

	std::cout << pr << std::endl;

	std::cout << std::endl;
	std::cout << "========================" << std::endl;
	std::cout << std::endl;

	hi.signForm(sh);
	hi.executeForm(sh);
	hi.signForm(ro);
	hi.executeForm(ro);
	hi.signForm(pr);
	hi.executeForm(pr);

	std::cout << "try ok\n" << sh.get_name() << std::endl;
	ShrubberyCreationForm test(sh);
	std::cout << test << std::endl;
	ShrubberyCreationForm test2;
	test2 = sh;
	std::cout << test2 << std::endl;
	return 0;
}
