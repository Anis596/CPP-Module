/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 07:36:04 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/13 07:41:57 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool		_signed;
	const int	_gradeToSign;
	const int	_gradeToExecute;
public:
	Form();
	Form(const std::string& name, int gradeToSign, int gradeToExecute);
	Form(const Form& src);
	~Form();
	Form& operator=(const Form& src);
	std::string	getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	void		beSigned(const Bureaucrat& b);
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
};
std::ostream& operator<<(std::ostream& o, const Form& f);
