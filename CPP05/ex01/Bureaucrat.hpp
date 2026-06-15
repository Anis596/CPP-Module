/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 03:25:07 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/13 07:23:25 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include <exception>

class Form;

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
		void incrementGrade();
		void decrementGrade();
		void signForm(Form& f);//pas de const car le bureaucrat va modif le formulaire en signant
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
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
//surcharger loperateur << pr lui apprendre a comment reagir qd il fait std::cout << Bureaucrat
//os = outputstream (flux de sortie) et obj bh c la variable bureaucrat quon va envoyer on la met en ref const pr ne pas la copier et garantir qu'on la lit seulement
//ostream c genre ce qui va permettre de construire std::cout qui est un objet de la class ostream c grace a ca qu'on definit que les bureaucrat peuvent etre appeler
//on met ostream psk si on mettait cout directement on pourrait afficher le bureaucrat que sur le terminal avc ostream on peut l'afficher partout (sur un fichier txt ou autre)
