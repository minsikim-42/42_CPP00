#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> iter;
	std::vector<int>::iterator
	for (int i =0; i < 20; i++)
	{
		iter.push_back(i);
	}
	try {
		std::cout << *easyfind(iter, 7) << std::endl;
		std::cout << *easyfind(iter, 4) << std::endl;
		std::cout << *easyfind(iter, 2) << std::endl;
		std::cout << *easyfind(iter, 20) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << " - Not found" << std::endl;
	}
}