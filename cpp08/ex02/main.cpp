#include "mutantstack.hpp"
#include <iostream>

int main()
{
	std::cout << "================== mutant stack test ================" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top : " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "top : " << mstack.top() << std::endl;
	std::cout << "size : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	for(MutantStack<int>::iterator iter = mstack.begin(); iter != mstack.end(); iter++)
		std::cout << "value : " << *iter << std::endl;


	std::cout << "================== list test ========================" << std::endl;

	std::list<int> list;

	list.push_back(5);
	list.push_back(17);

	std::cout << "top : " << list.back() << std::endl;

	list.pop_back();
	std::cout << "top : " << list.back() << std::endl;
	std::cout << "size : " << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	for(std::list<int>::iterator iter = list.begin(); iter != list.end(); iter++)
		std::cout << "value : " << *iter << std::endl;


	std::cout << "================== copy constructor test ============" << std::endl;
	MutantStack<int> s_copy(mstack);
	MutantStack<int> s_oper = mstack;

	s_copy.pop();
	s_copy.pop();
	s_copy.pop();
	s_copy.push(9991);
	s_copy.push(9992);
	s_copy.push(9993);


	for(MutantStack<int>::iterator iter = s_copy.begin(); iter != s_copy.end(); iter++)
		std::cout << *iter << std::endl;

	std::cout << "===============================" << std::endl;

	s_oper.pop();
	s_oper.pop();
	s_oper.pop();
	s_oper.push(9994);
	s_oper.push(9995);
	s_oper.push(9996);

	for(MutantStack<int>::iterator iter = s_oper.begin(); iter != s_oper.end(); iter++)
		std::cout << *iter << std::endl;


	std::cout << "================== const instance test ==============" << std::endl;

	try
	{
		const MutantStack<int> const_stack = s_oper;
		MutantStack<int>::const_iterator iter = const_stack.begin();
		std::cout << *iter << std::endl;
		// *iter = 9;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "================== reverse iterator test ==============" << std::endl;
	MutantStack<int> reverse;
	reverse.push(1);
	reverse.push(2);
	reverse.push(3);
	reverse.push(4);
	reverse.push(5);
	for (MutantStack<int>::reverse_iterator iter = reverse.rbegin(); iter != reverse.rend(); iter++)
		std::cout << "value : " << *iter << std::endl;

	std::cout << "================== const reverse iterator test ==============" << std::endl;

	const MutantStack<int> const_reverse(reverse);
	for (MutantStack<int>::const_reverse_iterator iter = const_reverse.rbegin(); iter != const_reverse.rend(); iter++)
		std::cout << "value : " << *iter << std::endl;


	return 0;
}
