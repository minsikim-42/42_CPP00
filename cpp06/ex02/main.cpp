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

void	identify(Base* p)
{
	// A *a = dynamic_cast<A *>(p);
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try{
		A &a = (dynamic_cast<A &>(p));
		static_cast<void>(a);
		std::cout << "A" << std::endl;
	}
	catch (...) {
	}
	try{
		B &b = (dynamic_cast<B &>(p));
		static_cast<void>(b);
		std::cout << "B" << std::endl;
	}
	catch (...) {
	}
	try{
		C &c = (dynamic_cast<C &>(p));
		static_cast<void>(c);
		std::cout << "C" << std::endl;
	}
	catch (...) {
	}
}

void	identify(const Base &p)
{
	if (dynamic_cast<const A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<const B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<const C *>(&p))
		std::cout << "C" << std::endl;
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

void	test(void)
{
	Base	*ba = generate();
	const Base	*ba2 = generate();

	identify(ba);
	identify(*ba);

	identify(ba2);
	identify(*ba2);

	delete ba;
	delete ba2;
}

int main()
{
	test();

	// system("leaks cast");
}