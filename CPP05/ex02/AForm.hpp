/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 07:36:04 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/16 06:01:28 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool		_signed;
	const int	_gradeToSign;
	const int	_gradeToExecute;
public:
	AForm();
	AForm(const std::string& name, int gradeToSign, int gradeToExecute);
	AForm(const AForm& src);
	virtual ~AForm();
	AForm& operator=(const AForm& src);
	std::string	getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	void		beSigned(const Bureaucrat& b);
	virtual void execute(const Bureaucrat& executor) const = 0;
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw() {
			return "Form grade is too high!";
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw() {
			return "Form grade is too low!";
		}
	};
	class NotSignedException : public std::exception
	{
	public:
		virtual const char* what() const throw() {
			return " Document is not signed!";
		}
	};
};
std::ostream& operator<<(std::ostream& o, const AForm& f);
