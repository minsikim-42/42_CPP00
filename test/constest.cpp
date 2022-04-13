#include <iostream>

void	test(int *i)
{
	// int k = 42; // not changed
	// i = &k;
	*i = 142;
}

// void	test2(const int *i) // const error
// {
// 	*i = 20;
// }

int main()
{
	int h = 100;
	const int *i = &h;
	int h2 = 100;
	int *i2 = &h2;
	test(const_cast<int *>(i));
	// test(i); //const error
	test(i2);
	std::cout << *i << std::endl;
	std::cout << *i2 << std::endl;
}