#include "Serialization.hpp"

int main()
{
	Data	data;
	uintptr_t	p;
	Data	*d_ptr = &data;

	p = serialize(d_ptr);
	std::cout << p << std::endl;
	d_ptr = deserialize(p);
	std::cout << d_ptr->get_data() << std::endl;
	return (0);
}