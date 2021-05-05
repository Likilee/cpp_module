#include "iter.hpp"
#include "iter.hpp"
#include <string>
#include <iostream>

class Awesome
{
	public :
		Awesome(void) : _n(42) {return ;}
		int get(void) const {return this->_n;}
	private :
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}
template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return;
}

int main(void)
{
	std::cout << "*** Test1 : int[] ***" << std::endl;
	int intR[5] = { 0, 1, 2, 3, 4 };
	int *nullInt = NULL;
	iter(nullInt, 5, &display);
	iter(intR, 5, &display);
	std::cout << std::endl;

	std::cout << "\n*** Test2 : float[] ***" << std::endl;
	float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatR, 5, &display);
	std::cout << std::endl;

	std::cout << "\n*** Test3 : double[] ***" << std::endl;
	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleR, 5, &display);
	std::cout << std::endl;

	std::cout << "\n*** Test4 : bool[] ***" << std::endl;
	bool boolR[2] = { false, true };
	iter(boolR, 2, &display);
	std::cout << std::endl;

	std::cout << "\n*** Test5 : string[] ***" << std::endl;
	std::string stringR[5] = { "C++", "nice", "templates", "are", "fun" };
	iter(stringR, 5, &display); std::cout << std::endl;
	iter(stringR, 2, &display); std::cout << std::endl;
	iter(stringR, 0, &display); std::cout << std::endl;

	std::cout << "\n*** Test6 : Class ***" << std::endl;
	Awesome awesomes[5];
	::iter(awesomes, 5 , print);
	return (0);
}
