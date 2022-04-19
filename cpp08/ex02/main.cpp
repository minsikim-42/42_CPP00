#include "MutantStack.hpp"
#include <list>

int main()
{
	std::list<int> list;
	// try{
	// 	list.pop_front();
	// } catch (const std::exception &e) { std::cerr << e.what() << std::endl; }
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "stack:\n";
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	////////////////////////////////////////////
	std::cout << "\n===========================\n\n";
	////////////////////////////////////////////

	std::cout << *mstack.rbegin() << std::endl;
	mstack.pop();
	std::cout << *mstack.rbegin() << std::endl;
	std::cout << *(mstack.rend() - 1) << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	std::cout << "stack:\n";
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	return 0;
}