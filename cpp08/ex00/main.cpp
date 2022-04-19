#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> arr;
	std::vector<char> arr2;
	for (int i =0; i < 20; i++)
	{
		arr.push_back(i);
		arr2.push_back(i * 3);
	}
	try {
		std::vector<int>::iterator it = easyfind(arr, 8);
		std::cout << *(++it) << std::endl;


		std::cout << *easyfind(arr, 7) << std::endl;
		std::cout << *easyfind(arr, 4) << std::endl;
		std::cout << *easyfind(arr, 2) << std::endl;
		std::cout << *easyfind(arr, 20) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << " - Not found" << std::endl;
	}
	try {
		std::cout << *easyfind(arr2, 48) << std::endl;
		std::cout << *easyfind(arr2, 57) << std::endl;
		std::cout << *easyfind(arr2, 58) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << " - Not found" << std::endl;
	}
}