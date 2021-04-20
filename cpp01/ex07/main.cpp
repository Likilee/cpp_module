#include <iostream>
#include <fstream>


std::string	Replace(std::string &target, std::string sub, std::string mod)
{
	int			start_pos;

	start_pos = 0;
	while ((start_pos = target.find(sub, start_pos)) != std::string::npos)
	{
		target.replace(start_pos, sub.length(), mod);
		start_pos += mod.length();
	}
	return (target);
}

int		main(int ac, char **av)
{
	std::ifstream	fin;
	std::ofstream	fout;
	std::string		str;

	fin.open(av[1]);
	if (fin.is_open())
	{
		fout.open(std::string(av[1]) + ".replace");
		if (fout.is_open())
		{
			while (!std::getline(fin, str).eof())
				fout << Replace(str, av[2], av[3]) << std::endl;
			fout << Replace(str, av[2], av[3]);
		}
		fout.close();
	}
	fin.close();
	return (0);
}
