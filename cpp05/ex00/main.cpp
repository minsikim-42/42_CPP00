#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	bu;

	try
	{
		bu.incrementGrade(500);
	}
	catch (std::exception & e) {
	  /* handle exception */
	}
}