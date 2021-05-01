#include <iostream>
#include <string>
#include "StringCast.hpp"

int		main(int ac, char *av[])
{
	if (ac == 2)
	{
		StringCast string_cast(av[1]);

		string_cast.toCharPrint();
		string_cast.toIntPrint();
		string_cast.toFloatPrint();
		string_cast.toDoublePrint();
	}
	return (0);
}
