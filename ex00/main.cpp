/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 03:25:05 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/13 05:54:37 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat stevebonda("steve", 2);
		std::cout << stevebonda << std::endl;
		stevebonda.incrementGrade();
		std::cout << stevebonda << std::endl;
		stevebonda.incrementGrade();
		std::cout << stevebonda << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat jacem("jagharra", 149);
		std::cout << jacem << std::endl;
		jacem.decrementGrade();
		std::cout << jacem << std::endl;
		jacem.decrementGrade();
		std::cout << jacem << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat fail("Fail", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat fail2("Fail2", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat jamel;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
