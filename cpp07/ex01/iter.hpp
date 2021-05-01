#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *addr, size_t length, void (*f)(T const &))
{
	if (addr == NULL)
		std::cout << "Iter : Null pointer input" << std::endl;
	else
		for (size_t i = 0; i < length; ++i)
			f(addr[i]);
}

template<typename T>
void display(T const &value)
{

	std::cout << value << " ";
}

#endif
