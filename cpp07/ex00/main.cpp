#include "whatever.hpp"
#include <string>
#include <iostream>

class Awesome
{
	public:
		Awesome( int n ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) const
		{
			return (this->_n == rhs._n);
		}
		bool operator!=( Awesome const & rhs ) const
		{
			return (this->_n != rhs._n);
		}
		bool operator>( Awesome const & rhs ) const
		{
			return (this->_n > rhs._n);
		}
		bool operator<( Awesome const & rhs ) const
		{
			return (this->_n < rhs._n);
		}
		bool operator>=( Awesome const & rhs ) const
		{
			return (this->_n >= rhs._n);
		}
		bool operator<=( Awesome const & rhs ) const
		{
			return (this->_n <= rhs._n);
		}
		int		getNumber(void) const
		{
			return (this->_n);
		}
	private:
		int _n;
};
std::ostream &operator<<(std::ostream &out, Awesome const &awe)
{
	out << awe.getNumber();
	return (out);
}

int		main()
{
	int a = 2;
	int b = 3;
	std::cout << "**** Test1: Int ****" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::cout << "\n**** Test2: String different ****" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	std::cout << "\n**** Test3: String same ****" << std::endl;
	std::string e = "chaine3";
	std::string f = "chaine3";

	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "f address -> " << &f  << std::endl;
	std::cout << "min(e, f) = " << ::min(e, f) << " (" << &::min(e, f) << ")" << std::endl;
	std::cout << "max(e, f) = " << ::max(e, f) << " (" << &::max(e, f) << ")" << std::endl;

	std::cout << "\n**** Test4: double different ****" << std::endl;
	double g = 3.14;
	double h = 4.242;
	std::cout << "g = " << g << ", h = " << h << std::endl;
	::swap(g, h);
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
	std::cout << "max(g, h) = " << ::max(g, h) << std::endl;

	std::cout << "\n**** Test4: double same ****" << std::endl;
	double i = 4.2;
	double j = 4.2;
	std::cout << "i = " << i << ", j = " << j << std::endl;
	::swap(i, j);
	std::cout << "i = " << i << ", j = " << j << std::endl;
	std::cout << "min(i, j) = " << ::min(i, j) << std::endl;
	std::cout << "max(i, j) = " << ::max(i, j) << std::endl;
	std::cout << "j address -> " << &j  << std::endl;
	std::cout << "min(i, j) = " << ::min(i, j) << " (" << &::min(i, j) << ")" << std::endl;
	std::cout << "max(i, j) = " << ::max(i, j) << " (" << &::max(i, j) << ")" << std::endl;



	std::cout << "\n**** Test5: Class test ****" << std::endl;

	Awesome awe1(50);
	Awesome awe2(100);
	::swap(awe1, awe2);
	std::cout << awe1 << " | " << awe2 << std::endl;
	std::cout << "min( awe1, awe2 ) = " << ::min(awe1, awe2) << std::endl;
	std::cout << "max( awe1, awe2 ) = " << ::max(awe1, awe2) << std::endl;

	return (0);
}
