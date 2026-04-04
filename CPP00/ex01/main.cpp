/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 06:32:08 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/04 08:44:53 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook ph;
	std::string command;
	while (1)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, command))
			break;
		if (command == "ADD")
		ph.add();
		else if (command == "SEARCH")
			ph.search();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
