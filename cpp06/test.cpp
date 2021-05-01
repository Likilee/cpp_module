#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <math.h>

int main(int ac, char **av)
{
	double		d;
	int			i;
	if (ac == 2)
	{
		d = atof(av[1]);
		i = static_cast<int>(d);
		if (d > INT32_MAX || d < INT32_MIN || isnan(d))
			std::cout << "impossible" << std::endl;
		std::cout << i << std::endl;

	}
	return (0);
}
