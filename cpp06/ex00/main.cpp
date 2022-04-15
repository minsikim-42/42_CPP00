#include <iostream>
#include <iomanip>
#include <cmath>

void	print_char(std::string agv)
{
	std::cout << "char : ";
	try
	{
		char *err;
		char c = static_cast<char>(std::strtod(agv.c_str(), &err));
		std::string e = err;
		if (e.length() != 0 && e != "f")
		{
			std::cout << "Invalid input" << std::endl;
		}
		else if (isinf(std::stoi(agv)))
			std::cout << "impossible" << std::endl;
		else if (std::isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable\n";
	}
	catch (std::exception const &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	print_int(std::string agv)
{
	std::cout << "int : ";
	try
	{
		char *err;
		int i = static_cast<int>(std::strtod(agv.c_str(), &err));
		std::string e = err;
		if (e.length() != 0 && e != "f")
		{
			std::cout << "Invalid input" << std::endl;
		}
		else if (isinf(std::stoi(agv)))
			std::cout << "impossible" << std::endl;
		else if (std::isinf(i))
			i = 42 / static_cast<double>(0);
		else
			std::cout << i << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	print_float(std::string agv)
{
	std::cout << "float : ";
	try
	{
		char *err;
		float f = static_cast<float>(std::strtod(agv.c_str(), &err));
		std::string e = err;
		if (e.length() != 0 && e != "f")
		{
			std::cout << "Invalid input" << std::endl;
		}
		else if (std::isnan(f))
		{
			std::cout << "nanf" << std::endl;
			return ;
		}
		else
			std::cout << f << "f" << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	print_double(std::string agv)
{
	std::cout << "double : ";
	try
	{
		char *err;
		double d = static_cast<double>(std::strtod(agv.c_str(), &err));
		std::string e = err;
		if (e.length() != 0 && e != "f")
		{
			std::cout << "Invalid input" << std::endl;
		}
		else if (std::isnan(d))
		{
			std::cout << "nan" << std::endl;
		}
		else
			std::cout << d << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "impossible" << std::endl;
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