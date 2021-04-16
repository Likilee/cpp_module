#include "contact.hpp"

Contact::Contact()
{
	first_name = std::string();
	last_name = std::string();
	nick_name = std::string();
	login = std::string();
	postal_address = std::string();
	email_address = std::string();
	phone_number = std::string();
	birthday_date = std::string();
	favorite_meal = std::string();
}

Contact::~Contact()
{
}

void			Contact::SetFirstName(std::string first_name_in)
{
	first_name = first_name_in;
}

void			Contact::SetLastName(std::string last_name_in)
{
	last_name = last_name_in;
}
void			Contact::SetNickName(std::string nick_name_in)
{
	nick_name = nick_name_in;
}
void			Contact::SetLogin(std::string login_in)
{
	login = login_in;
}
void			Contact::SetPostalAddress(std::string postal_address_in)
{
	postal_address = postal_address_in;
}
void			Contact::SetEmailAddress(std::string email_address_in)
{
	email_address = email_address_in;
}
void			Contact::SetPhoneNumber(std::string phone_number_in)
{
	phone_number = phone_number_in;
}
void			Contact::SetBirthdayDate(std::string birthday_date_in)
{
	birthday_date =birthday_date_in;
}
void			Contact::SetFavoriteMeal(std::string favorite_meal_in)
{
	favorite_meal = favorite_meal_in;
}
void			Contact::SetUnderwearColor(std::string underwearcolor_in)
{
	underwear_color = underwearcolor_in;
}
void			Contact::SetDarkestSecret(std::string darkest_secret_in)
{
	darkest_secret = darkest_secret_in;
}
std::string		Contact::GetFirstName(void)
{
	return (first_name);
}
std::string		Contact::GetLastName(void)
{
	return (last_name);
}
std::string		Contact::GetNickName(void)
{
	return (nick_name);
}
std::string		Contact::GetLogin(void)
{
	return (login);
}
std::string		Contact::GetPostalAddress(void)
{
	return (postal_address);
}
std::string		Contact::GetEmailAddress(void)
{
	return (email_address);
}
std::string		Contact::GetPhoneNumber(void)
{
	return (phone_number);
}
std::string		Contact::GetBirthdayDate(void)
{
	return (birthday_date);
}
std::string		Contact::GetFavoriteMeal(void)
{
	return (favorite_meal);
}
std::string		Contact::GetUnderwearColor(void)
{
	return (underwear_color);
}
std::string		Contact::GetDarkestSecret(void)
{
	return (darkest_secret);
}
