#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	bu;

	try
	{
		std::cout << "try\n";
		bu.decrementGrade(500); // Too low
		bu.incrementGrade(500); // Too high
		std::cout << "ok\n";
	}
	catch (std::exception &e) {
		std::cout << "catch\n";
		std::cout << e.what() << std::endl;
	}
	Bureaucrat a("a", 10);
	Bureaucrat b("b", 50);
	Bureaucrat c("c", 150);
	// Bureaucrat b_wrong("d", 200); // error
	// Form		f_wrong("wrong", 0, 0); // error
	// std::cout << "made wrong - " << wrong << std::endl;
	try
	{
		Form	wrong2("wrong2", 150, 151);
		std::cout << "wrong ok\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "try catched wrong\n\n";
	
	Form f("f", 20, 70);
	try
	{
		f.beSigned(a);
		f.beSigned(b);
		
		// f.beSigned(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << f << std::endl;
}