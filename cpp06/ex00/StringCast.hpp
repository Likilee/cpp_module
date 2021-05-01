#ifndef STRINGCAST_HPP
# define STRINGCAST_HPP

# include <string>
# include <iostream>
# include <math.h>

class StringCast
{
private:
	std::string	_str;
	double		_double;

	StringCast();
	bool	isNotInteger();
	bool	isNotScala();
	void	printImpossible();
public:
	StringCast(std::string const &str);
	StringCast(const StringCast &from);
	virtual ~StringCast();
	StringCast	&operator=(const StringCast &rvalue);

	void	toCharPrint();
	void	toIntPrint();
	void	toFloatPrint();
	void	toDoublePrint();
};

#endif
