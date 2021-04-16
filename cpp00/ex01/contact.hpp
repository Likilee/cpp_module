#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string		first_name;
	std::string		last_name;
	std::string		nick_name;
	std::string		login;
	std::string		postal_address;
	std::string		email_address;
	std::string		phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;
public:
	Contact();
	~Contact();
	void			SetFirstName(std::string first_name_in);
	void			SetLastName(std::string last_name_in);
	void			SetNickName(std::string nick_name_in);
	void			SetLogin(std::string login_in);
	void			SetPostalAddress(std::string postal_address_in);
	void			SetEmailAddress(std::string email_address_in);
	void			SetPhoneNumber(std::string phone_number_in);
	void			SetBirthdayDate(std::string birthday_date_in);
	void			SetFavoriteMeal(std::string favorite_meal_in);
	void			SetUnderwearColor(std::string underwearcolor_in);
	void			SetDarkestSecret(std::string darkest_secret_in);
	std::string		GetFirstName(void);
	std::string		GetLastName(void);
	std::string		GetNickName(void);
	std::string		GetLogin(void);
	std::string		GetPostalAddress(void);
	std::string		GetEmailAddress(void);
	std::string		GetPhoneNumber(void);
	std::string		GetBirthdayDate(void);
	std::string		GetFavoriteMeal(void);
	std::string		GetUnderwearColor(void);
	std::string		GetDarkestSecret(void);
};

#endif
