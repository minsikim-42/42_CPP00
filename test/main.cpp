#include <iostream>

int main()
{
	int i = 10;
	try
	{
		if (i > 5)
			throw i;
		std::cout << " hi hi\n";
	}
	catch(int i)
	{
		std::cout << i << " catch\n";
	}
	std::cout << " hi\n";
}