/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 06:02:07 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/16 03:50:40 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default Form"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::~Form()
{
}

Form::Form(const Form& src) : _name(src._name),  _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	std::cout << "Form Copy constructor called" << std::endl;
}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Named constructor called " << name << " is here" << std::endl;
}

Form& Form::operator=(const Form& src)
{
	if (this != &src)
	{
		this->_signed = src._signed;
		std::cout << " Form Assignment operator called" << std::endl;
	}
	return *this;
}

std::string Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= _gradeToSign)
	{
		_signed = true;
	}
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& f)
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
