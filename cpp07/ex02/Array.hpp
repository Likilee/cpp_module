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
	Array(const Array &from);
	virtual ~Array();
	Array	&operator=(const Array &rvalue);

	T		&operator[](unsigned int i);
	unsigned int	&size() const;

};

#endif
