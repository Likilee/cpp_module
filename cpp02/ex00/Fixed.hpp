#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_value;
	static int const	_bit = 8;
public:
	Fixed();
	Fixed(const Fixed &a);
	~Fixed();
	Fixed	&operator=(const Fixed &rvalue);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};


#endif
