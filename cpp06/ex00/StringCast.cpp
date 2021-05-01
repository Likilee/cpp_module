#include "StringCast.hpp"

StringCast::StringCast(std::string const &str)
: _str(str)
{
	_double = atof(str.c_str());
}

StringCast::StringCast(const StringCast &from)
{
	*this = from;
}

StringCast::~StringCast()
{
}

StringCast		&StringCast::operator=(const StringCast &rvalue)
{
	if (this != &rvalue)
		*this = rvalue;
	return (*this);
}


void	StringCast::toCharPrint()
{
	std::cout << "char: ";
	if (isNotScala() || isNotInteger())
		printImpossible();
	else if (isprint(static_cast<char>(_double)))
		std::cout << "'" << static_cast<char>(_double) << "'";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void	StringCast::toIntPrint()
{
	std::cout << "int: ";
	if (isNotScala() || isNotInteger())
		printImpossible();
	else
		std::cout << static_cast<int>(_double);
	std::cout << std::endl;
}

void	StringCast::toFloatPrint()
{
	std::cout << "float: ";
	if (isNotScala())
		printImpossible();
	else
	{
		std::cout << static_cast<float>(_double);
		if (_double - static_cast<int>(_double) == 0.0)
			std::cout << ".0";
		std::cout << "f";
	}
	std::cout << std::endl;
}


void	StringCast::toDoublePrint()
{
	std::cout << "double: ";
	if (isNotScala())
		printImpossible();
	else
	{
		// std::cout.precision(10);
		std::cout << _double;
		if (_double - static_cast<int>(_double) == 0.0)
			std::cout << ".0";
	}
	std::cout << std::endl;
}

bool	StringCast::isNotScala()
{
	if (_double == 0.0)
	{
		if (_str.length() == 0)
			return (true);
		else if (!isnumber(_str.at(0)))
			return (true);
	}
	return (false);
}

bool	StringCast::isNotInteger()
{
	if (_double > INT32_MAX || _double < INT32_MIN || isnan(_double))
		return (true);
	return (false);
}

void	StringCast::printImpossible()
{
	std::cout << "impossible";
}
