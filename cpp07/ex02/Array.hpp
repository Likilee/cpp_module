#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
private:
	T				*_array;
	unsigned int	_n;
public:
	Array();
	Array(unsigned int n);
	Array(Array const &from);
	virtual ~Array();
	Array	&operator=(Array const &rvalue);

	T				&operator[](unsigned int i) const;
	unsigned int	size() const;
	T				*getArray() const;

	class OutOfRangeException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

# include "Array.ipp"

#endif
