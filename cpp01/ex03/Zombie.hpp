#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string	name;
	std::string type;
	std::string	randomName(void);

public:
	Zombie(void);
	Zombie(std::string name_in, std::string type_in);
	virtual ~Zombie();
	void	anounce(void);
	void	randomChump(void);

};

#endif
