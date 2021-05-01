#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

static void testForm(Bureaucrat& bur, Form* form)
{
    std::cout << std::endl << "Sign & Execute " << form->getName() << ": " << std::endl;
    bur.signForm(*form);
    bur.executeForm(*form);
}

static void testIntern(Intern& intern, const std::string &form_name, const std::string &target_name)
{
    Bureaucrat sign("Mayor", 1);
    Form *totest = NULL;

    std::cout << std::endl;
	try {
    	totest = intern.makeForm(form_name, target_name);
		testForm(sign, totest);
        delete totest;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main()
{
    Intern someRandomIntern;

    testIntern(someRandomIntern, "Presidential Pardon form", "target1");
    testIntern(someRandomIntern, "Robot to my request form", "target2");
    testIntern(someRandomIntern, "Shrubbery Creation form", "target3");
    testIntern(someRandomIntern, "doesn't exist", "target_error");

    return (0);
}
