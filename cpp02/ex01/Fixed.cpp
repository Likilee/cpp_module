#include "Fixed.hpp"

Fixed::Fixed(): _8point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int & num)
{
	std::cout << "Int constructor called" << std::endl;
	_8point_value = num << 8;
}

Fixed::Fixed(const float &num)
{
	std::cout << "Float constructor called" << std::endl;
	_8point_value = roundf(num * 256);
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->_8point_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_8point_value = raw;
}

Fixed	&Fixed::operator=(const Fixed &rvalue)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rvalue)
		_8point_value = rvalue.getRawBits();
	return (*this);
}
float	Fixed::toFloat(void) const
{
	return ((float)_8point_value / 256.0);
}

int		Fixed::toInt(void) const
{
	return (_8point_value >> 8);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &a)
{
	out << a.toFloat();
	return (out);
}
