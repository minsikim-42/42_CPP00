#include "iter.hpp"
#include <iostream>

template<typename T>
void	printn(const T &ele)
{
	std::cout << ele << std::endl;
}

template<typename T>
void	print(const T &ele)
{
	std::cout << ele;
}
class A
{
	int i;
public:
	A() : i(42) {}
	int get_i() const {return i;}
};

std::ostream	&operator<<(std::ostream &out, const A &a)
{
	out << a.get_i();
	return out;
}

int main()
{
	int		arr[] = {1, 2, 3, 4, 5, 6, 7};
	char	arr2[] = "read me\n";
	A		arr3[3];

	iter(arr, 6, printn);
	iter(arr2, 8, print);
	iter(arr3, 3, printn);
}