#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string	name;
	std::string type;
public:
	Zombie(void);
	Zombie(std::string name_in, std::string type_in);
	virtual ~Zombie();
	void	anounce(void);
};

#endif
