#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& src);
		~Intern();
		Intern& operator=(const Intern& src);
		AForm* makeForm(std::string formName, std::string target);
	private:
		AForm* makeShrubbery(std::string target);
		AForm* makeRobotomy(std::string target);
		AForm* makePresidential(std::string target);
};