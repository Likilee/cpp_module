#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <iostream>
# include <exception>

class EmptyContainer : public std::exception
{
	virtual const char *what() const throw();
};

const char *EmptyContainer::what() const throw()
{
	return ("Error : easyfind got empty container");
}

template <typename T>
typename T::iterator  easyfind(T &container, int find_value)
{
	if (container.begin() == container.end())
		throw EmptyContainer();
	return (std::find(container.begin(), container.end(), find_value));
}

#endif
