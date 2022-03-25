#include <iostream>

int main()
{
	float f = 42.42;
	int i = 7;

	std::cout << f << std::endl << i << std::endl;
	for (int k = 0; k < 32; k++)
	{
		std::cout << ((i << (31 - k) >> 31) & 1);
	}
	for (int k = 0; k < 32; k++)
	{
		std::cout << (f * (1 << (31 - k))) << std::endl;
	}
}