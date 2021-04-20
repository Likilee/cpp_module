#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
private:
	const Brain	brain;
public:
	Human();
	~Human();
	const void	*identify() const;
};

#endif