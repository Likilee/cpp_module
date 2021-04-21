#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_8point_value;
	static int const	_bit = 8;
public:
	Fixed();
	Fixed(const int &num);
	Fixed(const float &num);
	Fixed(const Fixed &a);
	~Fixed();
	Fixed			&operator=(const Fixed &rvalue);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &a);

#endif
