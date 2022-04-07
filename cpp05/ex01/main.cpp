#include "Bureaucrat.hpp"

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
}