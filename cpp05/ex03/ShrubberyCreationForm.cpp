#include "ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::drawTree(std::ofstream &fout) const
{
fout << "	            	.o00o\n";
fout << "                   o000000oo\n";
fout << "                  00000000000o\n";
fout << "                 00000000000000\n";
fout << "              oooooo  00000000  o88o\n";
fout << "           ooOOOOOOOoo  ```''  888888\n";
fout << "         OOOOOOOOOOOO'.qQQQQq. `8888'\n";
fout << "        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n";
fout << "        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n";
fout << "         OOOOOOOOO QQQQQQQQQQ/ /QQ\n";
fout << "           OOOOOOOOO `QQQQQQ/ /QQ'\n";
fout << "             OO:F_P:O `QQQ/  /Q'\n";
fout << "                \\. \\ |  // |\n";
fout << "                d\\ \\\\|_////\n";
fout << "                qP| \\ _' `|Ob\n";
fout << "                   \\  / \\  \\Op\n";
fout << "                   |  | O| |\n";
fout << "           _       /\\. \\_/ /\\\n";
fout << "            `---__/|_\\   //|  __\n";
fout << "                  `-'  `-'`-'-'\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
: Form("Shrubbery Creation form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &from)
: Form(from), _target(from.getTarget())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rvalue)
{
	(void)rvalue;
	return (*this);
}

std::string const	&ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	fout;

	if (isSigned() == false) //1. 폼이 사인되어있는지
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > getExecGrade())//2. 실행 관료가 충분히 등급이 높은지
		throw Form::GradeTooHighException();
	else
	{
		try
		{
			fout.open(_target + "_shrubbery");
			drawTree(fout);
			std::cout << "Excute ShrubberyCreation!" << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
