#include "Data.hpp"

int main()
{
	Data	data;
	uintptr_t	p;
	Data	*d_ptr = &data;

	p = serialize(d_ptr);
	std::cout << p << std::endl;
	d_ptr = deserialize(p);
	// std::cout << d_ptr->get_c() << std::endl;
	std::cout << d_ptr->get_i() << std::endl;
	std::cout << d_ptr->get_j() << std::endl;
	std::cout << d_ptr->get_k() << std::endl;
	std::cout << d_ptr->get_l() << std::endl;

	char *test = reinterpret_cast<char *>(&data);
	int *test1 = reinterpret_cast<int *>(test);
	float *test2 = reinterpret_cast<float *>(test1);
	Data *test3 = reinterpret_cast<Data *>(test2);
	std::cout << test3->get_c() << std::endl;
	std::cout << test3->get_l() << std::endl;

	std::cout << sizeof(Data) << std::endl;

	return (0);
}
