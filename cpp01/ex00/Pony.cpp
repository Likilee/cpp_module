#include "Pony.hpp"

Pony::Pony(void)
{
	this->name = "Baby pony";
	this->age = 0;
}

Pony::Pony(std::string name_in, int age_in)
{
	this->name = name_in;
	this->age = age_in;
}

Pony::~Pony()
{};

void	Pony::Howl(void)
{
	std::cout << "히이잉~~ 내이름은 '" << this->name << "' " << this->age << "살 이라궁!" << std::endl;
}
