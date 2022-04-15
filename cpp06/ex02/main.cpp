#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base	*generate(void)
{
	srand(time(NULL));
	const int r = rand() % 3;
	switch (r)
	{
		case 0:
			std::cout << "Make A\n";
			return (new A);
			break;
		case 1:
			std::cout << "Make B\n";
			return (new B);
			break;
		case 2:
			std::cout << "Make C\n";
			return (new C);
			break;
		default:
			return NULL;
	}
}

void	identify(const Base* p)
{
	if (dynamic_cast<const A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<const B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<const C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(const Base& p)
{
	if (dynamic_cast<const A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<const B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<const C *>(&p))
		std::cout << "C" << std::endl;
}

int main()
{
	const Base	*ba = generate();
	Base		*ba2 = generate();

	identify(ba);
	identify(*ba);
	identify(ba2);
	identify(*ba2);
}