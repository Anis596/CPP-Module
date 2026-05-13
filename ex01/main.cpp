/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 03:25:05 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/13 07:39:28 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "--- TEST 1: Creating forms with invalid grades ---" << std::endl;
	try
	{
		Form impossible("ImpossibleForm", 0, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Creation error: " << e.what() << '\n';
	}
	try
	{
		Form useless("UselessForm", 50, 200);
	}
	catch(const std::exception& e)
	{
	std::cerr << "Creation error: " << e.what() << '\n';
	}
	std::cout << "\n--- TEST 2: Signature, Demotion, and Failure ---" << std::endl;
	try
	{
		Bureaucrat yassine("Yassine", 50);
		Form taxReturn("Tax Return", 50, 50);
		Form propertyTax("Property Tax", 50, 50);
		std::cout << yassine << std::endl;
		std::cout << taxReturn << std::endl;
		yassine.signForm(taxReturn);
		std::cout << taxReturn << std::endl;
		std::cout << "\n-- Demoting Yassine --" << std::endl;
		yassine.decrementGrade();
		std::cout << yassine << std::endl;
		yassine.signForm(propertyTax);
		std::cout << propertyTax << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Unexpected exception: " << e.what() << '\n';
	}
	return 0;
}
