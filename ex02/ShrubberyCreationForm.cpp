/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 04:45:09 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/16 06:36:51 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default target")
{
	std::cout << "ShrubberyCreationForm default constructeur called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm parameterized constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm(src), _target(src._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	if (this != &src)
	{
		AForm::operator=(src);//on dmd a la class mere de copier ses attributs donc signed
		this->_target = src._target;
		std::cout << "ShrubberyCreationForm Assignment operator called" << std::endl;
	}
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (this->getSigned() == false)
		throw AForm::NotSignedException();
	if (executor.getGrade() > 137)
		throw AForm::GradeTooLowException();
	std::string filename = this->_target + "_shrubbery";
	std::ofstream file(filename.c_str());//convertir filename en str pr louvrir psk ofstream accepte pas std::string
	if (!file.is_open())
	{
		std::cerr << "Error while creating the file " << filename << std::endl;
		return ;
	}
	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "  _ -  | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;
	file.close();
}