#include "iostream"
#include "string"

int		main(void)
{
	std::string	origin = "HI THIS IS BRAIN";
	std::string	*pointer;
	std::string	&reference = origin;

	pointer = &origin;
	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
	return (0);
}
