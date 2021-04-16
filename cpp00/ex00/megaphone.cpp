#include <iostream>
#include <string>
#include <cctype>

int		main(int ac, char **av)
{
	int		i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (i = 1; i < ac; ++i)
	{
		for (int j = 0; av[i][j] != '\0'; ++j)
			if (av[i][j] >= 97 && av[i][j] <= 122)
				av[i][j] -= 32;
	}
	for (i = 1; i < ac - 1; ++i)
	{
		std::cout << av[i] << " ";
	}
	std::cout << av[i] << std::endl;
	return (0);
}

