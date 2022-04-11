#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm	sh("target");
	RobotomyRequestForm		ro("bobobo");
	PresidentialPardonForm	pr("pr");

	Bureaucrat				hi("hi", 70);
	Bureaucrat				king("king", 1);

	std::cout << hi.getGrade() << std::endl;
	std::cout << ro.get_execute_grade() << std::endl;
	hi.signForm(sh);
	hi.executeForm(sh);
	hi.signForm(ro);
	hi.executeForm(ro);
	hi.signForm(pr);
	hi.executeForm(pr);

	std::cout << std::endl;
	std::cout << "========================" << std::endl;
	std::cout << std::endl;

	king.signForm(sh);
	king.executeForm(sh);
	king.signForm(ro);
	king.executeForm(ro);
	king.signForm(pr);
	king.executeForm(pr);

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
	return 0;
}
