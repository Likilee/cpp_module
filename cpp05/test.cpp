#include <iostream>
#include <string>

int		main()
{
	try
	{
		int a, b;
		std::cin >> a;
		std::cin >> b;
		if (b < 0)
			throw b;
	}
	catch(int ex)
	{
		std::cout << "Error : b is under 0 :" << ex << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(...)
	{
		std::cout << "whatthe" << std::endl;
	}
	return (0);
}
