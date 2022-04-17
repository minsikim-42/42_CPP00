#include "iter.hpp"
#include <iostream>

template<typename T>
void	print(const T &ele)
{
	std::cout << ele << std::endl;
}

class A
{
	
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};


	iter(arr, 5, print);
}