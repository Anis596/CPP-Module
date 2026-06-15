/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 06:02:07 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/16 06:15:26 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Default Form"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

AForm::~AForm()
{
}

AForm::AForm(const AForm& src) : _name(src._name),  _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	std::cout << "Form Copy constructor called" << std::endl;
}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	std::cout << "Named constructor called " << name << " is here" << std::endl;
}

AForm& AForm::operator=(const AForm& src)
{
	if (this != &src)
	{
		this->_signed = src._signed;
		std::cout << " Form Assignment operator called" << std::endl;
	}
	return *this;
}

std::string AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= _gradeToSign)
	{
		_signed = true;
	}
	else
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	os << "Form: " << f.getName() << " | Signed: ";
	if (f.getSigned() == true)
		os << "Yes";
	else
		os << "No";
	os << " | Grade to Sign: " << f.getGradeToSign()
	   << " | Grade to Execute: " << f.getGradeToExecute();
	return os;
}
