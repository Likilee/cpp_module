#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

int main()
{
	srand(time(NULL));
	std::cout << "**** Shrub Success test ****" << std::endl;
	try {
		ShrubberyCreationForm form("target");
		std::cout << form << std::endl;
		Bureaucrat temp("Mayor", 3);
		temp.signForm(form);
		temp.executeForm(form);
		form.execute(temp);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "**** Robot Success test ****" << std::endl;
	try {
		RobotomyRequestForm form("target");
		std::cout << form << std::endl;
		Bureaucrat temp("Mayor", 3);
		temp.signForm(form);
		temp.executeForm(form);
		temp.executeForm(form);
		form.execute(temp);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "**** President Success test ****" << std::endl;
	try {
		PresidentialPardonForm form("target");
		std::cout << form << std::endl;
		Bureaucrat temp("Mayor", 3);
		temp.signForm(form);
		temp.executeForm(form);
		form.execute(temp);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "**** Shrub exception test ****" << std::endl;
	try {
		ShrubberyCreationForm form("target_error");
		std::cout << form << std::endl;
		Bureaucrat temp("Baby", 150);
		temp.signForm(form);
		temp.executeForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "**** Robot exception test ****" << std::endl;
	try {
		RobotomyRequestForm form("target_error");
		std::cout << form << std::endl;
		Bureaucrat temp("Baby", 150);
		temp.signForm(form);
		temp.executeForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "**** President exception test ****" << std::endl;
	try {
		PresidentialPardonForm form("target_error");
		std::cout << form << std::endl;
		Bureaucrat temp("Baby", 150);
		temp.signForm(form);
		temp.executeForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
