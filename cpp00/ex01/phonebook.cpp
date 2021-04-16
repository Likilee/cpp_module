#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	amount = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::Add(void)
{
	std::string	temp;
	int			totallen = 0;

	if (amount == 8)
		std::cout << "** PHONE BOOK IS FULL **" << std::endl;
	else
	{
		std::cout << "** ADD NEW CONTACT **" << std::endl;
		std::cout << "> First name : ";
		std::getline(std::cin, temp);
		totallen += temp.length();
		contacts[amount].SetFirstName(temp);
		std::cout << "> Last name : ";
		std::getline(std::cin, temp);
		totallen += temp.length();
		contacts[amount].SetLastName(temp);
		std::cout << "> Nick name : ";
		std::getline(std::cin, temp);
		totallen += temp.length();
		contacts[amount].SetNickName(temp);
		std::cout << "> login : ";
		std::getline(std::cin, temp);
		totallen += temp.length();
		contacts[amount].SetLogin(temp);
		std::cout << "> Postal address : ";
		std::getline(std::cin, temp);
		totallen += temp.length();
		contacts[amount].SetPostalAddress(temp);
		std::cout << "> Email address : ";
		std::getline(std::cin, temp);
		totallen += temp.length();
		contacts[amount].SetEmailAddress(temp);
		std::cout << "> Phone number : ";
		std::getline(std::cin, temp);
		totallen += temp.length();
		contacts[amount].SetPhoneNumber(temp);
		std::cout << "> Birthday date : ";
		std::getline(std::cin, temp);
		totallen += temp.length();
		contacts[amount].SetBirthdayDate(temp);
		std::cout << "> Favorite meal : ";
		std::getline(std::cin, temp);
		totallen += temp.length();
		contacts[amount].SetFavoriteMeal(temp);
		std::cout << "> Underwear Color : ";
		std::getline(std::cin, temp);
		totallen += temp.length();
		contacts[amount].SetUnderwearColor(temp);
		std::cout << "> Darkest secret : ";
		std::getline(std::cin, temp);
		totallen += temp.length();
		contacts[amount].SetDarkestSecret(temp);
		if (totallen == 0)
			std::cout << "** FAIL NO DATA **" << std::endl;
		else
		{
			std::cout << "** ADD SUCCESS **" << std::endl;
			++amount;
		}
	}
}

void	PhoneBook::Search(void)
{
	std::string	temp;
	int			index;

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First_name" << "|";
	std::cout << std::setw(10) << "Last_name" << "|";
	std::cout << std::setw(10) << "Nick_name" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	for (int i = 0; i < amount; ++i)
	{
		std::cout << std::setw(10) << i << "|";
		temp = contacts[i].GetFirstName();
		if (temp.length() > 10)
			temp[9] = '.';
		std::cout << std::setw(10) <<  temp.substr(0, 10) << "|";
		temp = contacts[i].GetLastName();
		if (temp.length() > 10)
			temp[9] = '.';
		std::cout << std::setw(10) << temp.substr(0, 10) << "|";
		temp = contacts[i].GetNickName();
		if (temp.length() > 10)
			temp[9] = '.';
		std::cout << std::setw(10) << temp.substr(0, 10) << std::endl;
	}
	std::cout << "> Search information of index : ";
	std::getline(std::cin, temp);
	if (IsValidIndex(temp))
		ShowInformationOfIndex(IndexStringToInt(temp));
	else
		std::cout << "** WRONG INDEX INPUT **" << std::endl;
}

bool	PhoneBook::IsValidIndex(std::string temp)
{
	if (temp.length() == 1 && temp[0] >= 48 && temp[0] <= 56)
		return (true);
	else
		return (false);
}

int		PhoneBook::IndexStringToInt(std::string temp)
{
	return (temp[0] - 48);
}

void	PhoneBook::ShowInformationOfIndex(int index)
{
	if (index >= amount)
	{
		std::cout << "** WRONG INDEX INPUT **" << std::endl;
		return ;
	}
	std::cout << "INFORMATION" << std::endl;
	std::cout << "First name : " << contacts[index].GetFirstName() << std::endl;
	std::cout << "Last name : " << contacts[index].GetLastName() << std::endl;
	std::cout << "Nick name : " << contacts[index].GetNickName() << std::endl;
	std::cout << "login : " << contacts[index].GetLogin() << std::endl;
	std::cout << "Postal address : " << contacts[index].GetPostalAddress() << std::endl;
	std::cout << "Email address : " << contacts[index].GetEmailAddress() << std::endl;
	std::cout << "Phone number : " << contacts[index].GetPhoneNumber() << std::endl;
	std::cout << "Birthday date : " << contacts[index].GetBirthdayDate() << std::endl;
	std::cout << "Favorite meal : " << contacts[index].GetFavoriteMeal() << std::endl;
	std::cout << "Underwear Color : " << contacts[index].GetUnderwearColor() << std::endl;
	std::cout << "Darkest secret : " << contacts[index].GetDarkestSecret() << std::endl;
}

void	PhoneBook::Exit(void)
{
	std::cout << "** GOOD BYE **" << std::endl;
}
