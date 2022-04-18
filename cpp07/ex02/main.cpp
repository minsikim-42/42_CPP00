#include "Array.tpp"
#include <iostream>

void	test()
{
	try
	{
		const Array<int> arr(5);
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr[i] << std::endl;
		}
		// for (int i = 0; i < 5; i++)
			// arr.set_arr(i, i);
		Array<int> deep;
		deep = arr;
		Array<int> deep2(arr);
		// arr.set_arr(1, 42);
		
			std::cout << "arr:\n";
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr[i] << std::endl;
		}
			std::cout << "deep:\n";
		for (int i = 0; i < 5; i++)
		{
			std::cout << deep[i] << std::endl;
		}
			std::cout << "deep2:\n";
		for (int i = 0; i < 5; i++)
		{
			std::cout << deep2[i] << std::endl;
		}
		std::cout << (arr)[4];
		std::cout << (arr)[5];
		std::cout << "-------------------" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cerr << "------------\n";
	}
}

void	test2()
{
	Array<int> *ar = new Array<int>(6);
	const Array<int> add = *ar;
	
	for (int i = 0; i < 6; i++)
	{
		std::cout << (*ar)[i] << " " << add[i] << std::endl;
	}

	try
	{
		std::cout << "try:\n";
		for (int i = 0; i < 6; i++)
			ar->set_arr(i, i);

		Array<int> deep = *ar;
		ar->set_arr(1, 42);
		std::cout << "arr:\n";
		for (int i = 0; i < 6; i++)
		{
			std::cout << (*ar)[i] << std::endl;
		}
			std::cout << "deep:\n";
		for (int i = 0; i < 6; i++)
		{
			std::cout << (deep)[i] << std::endl;
		}
		std::cout << (*ar)[100];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete ar;
}

int main()
{
	test();
	test2();
	std::cout << "----------------\n";
	std::cout << "new initial test\n";
	std::cout << "----------------\n";
	int *ini = new int[5];
	for (int i=0; i<5; i++)
		std::cout << (ini)[i] << std::endl;
	int *a = new int[5];
	for (int i=0; i < 5; i++)
		(a)[i] = i;
	int *b = new int[5];

	for (int i=0; i<5; i++)
		std::cout << (a)[i] << " " << (b)[i] << std::endl;
	
	delete[] ini;
	delete[] a;
	delete[] b;
	system("leaks template");
	return (0);
}
