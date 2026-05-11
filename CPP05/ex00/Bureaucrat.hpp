/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 03:25:07 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/11 07:56:15 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include <exception>

class Bureaucrat
{
	private:
		std::string	const _name ;
		int	_grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat& operator=(const Bureaucrat& src);
		Bureaucrat(std::string const& name, int grade);
		std::string getName() const;
		int getGrade() const;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()//le 2e const sert a dire que what() ne modifiera pas l'erreur
				{//throw() = specification d'exception vide, sert a dire que la fonction what ne fera jamais de throw donc ne jettera jamais une nouvelle erreur qd elle s'execute
					return "Error: Grade is too high!";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: Grade is too low!");
				}
		};
};
