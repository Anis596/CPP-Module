/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 04:45:41 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/16 06:53:22 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default target")
{
	std::cout << "RobotomyRequestForm default constructeur called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm parameterized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm(src), _target(src._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	if (this != &src)
	{
		AForm::operator=(src);//on dmd a la class mere de copier ses attributs donc signed
		this->_target = src._target;
		std::cout << "RobotomyRequestForm Assignment operator called" << std::endl;
	}
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (this->getSigned() == false)
		throw AForm::NotSignedException();
	if (executor.getGrade() > 45)
		throw AForm::GradeTooLowException();
	std::cout << "Zzzzz... " << "Vrrrr... " << std::endl;
	if (rand() % 2 == 0)//fonction qui donne un nbr au hasard on met modulo 2 donc soit 1 soit 0 pr donner 50% de chance
		std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
	else
		std::cout << "The robotomy on " << this->_target << " failed." << std::endl;
}
