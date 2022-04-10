#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm	sh;
		Bureaucrat				hi("hi", 142);

		hi.signForm(sh);
		hi.executeForm(sh);
		std::cout << "try ok\n";
	}
	catch (std::exception &e) {
		std::cout << "---catch---\n";
		std::cout << e.what() << std::endl;
	}
}
