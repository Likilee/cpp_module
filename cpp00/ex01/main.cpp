#include <iostream>
#include <string>
#include "phonebook.hpp"

int		main(int argc, char **argv)
{
	std::string	command;
	PhoneBook phone_book;

	while (1)
	{
		std::cout << "\n** TYPE COMMAND (ADD / SEARCH / EXIT) **" << std::endl;
		getline(std::cin, command);
		if (command == "ADD")
			phone_book.Add();
		else if (command == "SEARCH")
			phone_book.Search();
		else if (command == "EXIT")
		{
			phone_book.Exit();
			break ;
		}
	}
	return (0);
}
