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

	try
	{
		std::cout << "try\n";
		bu.incrementGrade(50); // 150 -> 100
		bu.decrementGrade(50); // 100 -> 150
		bu.incrementGrade(149); // 150 -> 1
		std::cout << "ok\n";
		std::cout << bu << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "catch\n";
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "try\n";
		bu.incrementGrade(1); // error
		std::cout << "ok\n";
		std::cout << bu << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "catch\n";
		std::cout << e.what() << std::endl;
	}
	std::cout << bu << std::endl;
}