#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>

class Sorcerer
{
private:
	std::string		_name;
	std::string		_title;
public:
	Sorcerer();
	Sorcerer(const std::string name);
	Sorcerer(const Sorcerer &from);
	~Sorcerer();
	Sorcerer	&operator=(const Sorcerer &rvalue);
};

#endif
