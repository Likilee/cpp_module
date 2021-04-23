#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string		_name;
	std::string		_title;
	void	ConstructMessage();
	void	DestructorMessage();
	Sorcerer();
public:
	Sorcerer(const std::string name, const std::string title);
	Sorcerer(const Sorcerer &from);
	~Sorcerer();
	Sorcerer	&operator=(const Sorcerer &rvalue);

	const std::string	&getName() const;
	const std::string	&getTitle() const;
	void				announce() const;
	void				polymorph(Victim const &victim) const;
};

std::ostream	&operator<<(std::ostream &out, Sorcerer &sorcerer);

#endif
