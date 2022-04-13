#include <iostream>
#include <iomanip>
#include <cmath>

void	print_char(std::string agv)
{
	std::cout << "char : ";
	try
	{
		char c = std::stoi(agv);
		if (std::isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable\n";
	}
	catch (std::exception const &e)
	{
		std::cout << "impossible - "  << e.what() << std::endl;
	}
}

void	print_int(std::string agv)
{
	std::cout << "int : ";
	try
	{
		int i = std::stoi(agv);
		if (std::numeric_limits<int>::max() < i \
			|| std::numeric_limits<int>::min() > i)
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
		if (std::isinf(i))
			i = 42 / (float)0;
		else
			std::cout << i << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << "impossible - "  << e.what() << std::endl;
	}
}

void	print_float(std::string agv)
{
	std::cout << "float : ";
	try
	{
		float f = std::stof(agv);
		if (std::isnan(f))
		{
			std::cout << "nanf" << std::endl;
			return ;
		}
		else
			std::cout << f << "f" << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "impossible - "  << e.what() << std::endl;
	}
}

void	print_double(std::string agv)
{
	std::cout << "double : ";
	try
	{
		double d = std::stod(agv);
		if (std::isnan(d))
		{
			std::cout << "nan" << std::endl;
			return ;
		}
		else
			std::cout << d << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "impossible - "  << e.what() << std::endl;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		return (-1);
	}
	std::string agv = argv[1];

	std::cout << std::fixed;
	std::cout.precision(1);
	print_char(agv);
	print_int(agv);
	print_float(agv);
	print_double(agv);
}