#include <iostream>
#include <string>
#include <sstream>
#include "Array.hpp"

int main()
{
	// int test
	std::cout << "\n[ == Array<int>(42) test == ]\n" << std::endl;
	Array<int> test(42);
	std::cout << "* Initialize test *" << std::endl;
	for(unsigned int i = 0;i < test.size();i++)
	{
		std::cout << test[i] << " ";
	}
	std::cout << std::endl;
	try{
		std::cout << "* Size test *" << std::endl;
		std::cout << test.size() << std::endl;

		std::cout << "* Inside value test *" << std::endl;
		for(unsigned int i = 0;i < test.size();i++)
		{
			test[i] = i + 1;
			std::cout << test[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "* Deep Copy test*" << std::endl;
		Array<int> test2(test);
		for(unsigned int i = 0;i < test2.size();i++)
		{
			test[i] = i * 2; // original 에 값을 바꿔도!
			std::cout << test2[i] << " "; // 똑같이 나오니?
		}
		std::cout << std::endl;
		std::cout << "* Exception test *" << std::endl;
		std::cout << test[44] << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n[ == const Array<int>(42) test == ]\n" << std::endl;
	const Array<int> test3(3);
	try{
		std::cout << "* Size test *" << std::endl;
		std::cout << test3.size() << std::endl;
		std::cout << "* Inside value test *" << std::endl;
		for(unsigned int i = 0;i < test3.size();i++)
		{
			test3[i] = i + 1;
			std::cout << test3[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "* Deep Copy test*" << std::endl;
		Array<int> test4(test3);
		for(unsigned int i = 0;i < test4.size();i++)
		{
			test3[i] = i * 2;
			std::cout << test4[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "* Value Change test*" << std::endl;
		for(unsigned int i = 0;i < test3.size();i++)
		{
			std::cout << test3[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "* Exception test *" << std::endl;
		std::cout << test3[44] << std::endl;

	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	// char test
	std::cout << "\n[ == Array<char>(42) test == ]\n" << std::endl;
	Array<char> test5(42);
	std::cout << "* Initialize test *" << std::endl;
	for(unsigned int i = 0;i < test5.size();i++)
	{
		std::cout << static_cast<int>(test5[i]) << " ";
	}
	std::cout << std::endl;
	try{
		std::cout << "* Size test *" << std::endl;
		std::cout << test5.size() << std::endl;

		std::cout << "* Inside value test *" << std::endl;
		for(unsigned int i = 0;i < test5.size();i++)
		{
			test5[i] = i + 48;
			std::cout << test5[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "* Deep Copy test*" << std::endl;
		Array<char> test6(test5);
		for(unsigned int i = 0;i < test6.size();i++)
		{
			test5[i] = i * 2; // original 에 값을 바꿔도!
			std::cout << test6[i] << " "; // 똑같이 나오니?
		}
		std::cout << std::endl;
		std::cout << "* Exception test *" << std::endl;
		std::cout << test5[44] << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	// string test
	std::cout << "\n[ == Array<string>(42) test == ]\n" << std::endl;
	Array<std::string> test7(42);
	std::cout << "* Initialize test *" << std::endl;
	for(unsigned int i = 0;i < test7.size();i++)
	{
		std::cout << test7[i] << " ";
	}
	std::cout << std::endl;
	try{
		std::cout << "* Size test *" << std::endl;
		std::cout << test7.size() << std::endl;

		std::cout << "* Inside value test *" << std::endl;
		for(unsigned int i = 0;i < test7.size();i++)
		{
			std::stringstream s;
			s << "s" << i;
			s >> test7[i];
			std::cout << test7[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "* Deep Copy test*" << std::endl;
		Array<std::string> test8(test7);
		for(unsigned int i = 0;i < test8.size();i++)
		{
			test7[i] = i * 2; // original 에 값을 바꿔도!
			std::cout << test8[i] << " "; // 똑같이 나오니?
		}
		std::cout << std::endl;
		std::cout << "* Exception test *" << std::endl;
		std::cout << test7[44] << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

