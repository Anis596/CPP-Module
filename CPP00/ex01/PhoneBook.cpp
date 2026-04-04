/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 02:41:52 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/04 08:38:11 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
}

void	PhoneBook::add()
{
	int	pos;
	if (_index < 8)
		pos = _index;
	else
	{
		_index = 0;
		pos = 0;
	}
	_contacts[pos].set_contact();
	_index++;
}

std::string	PhoneBook::format(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str.append(".");//append = ajouter .push_back marche aussi
	}
	return (str);
}

void	PhoneBook::search()
{
	int	i;
	int	j = 0;
	std::string input;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	while (j < 8)
	{
		if (!_contacts[j].get_firstName().empty())
		{
			std::cout << "|" << std::setw(10) << j;
			std::cout << "|" << std::setw(10) << format(_contacts[j].get_firstName());
			std::cout << "|" << std::setw(10) << format(_contacts[j].get_lastName());
			std::cout << "|" << std::setw(10) << format(_contacts[j].get_nickname());
			std::cout << "|" << std::endl;
		}
		j++;
	}
	do
	{
		i = -1;//pr le remettre invalide a chaque tour
		std::cout << "Put contact index : ";
		std::getline(std::cin, input);
		if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
			i = input[0] - '0';
	}while (i < 0 || i > 7 || _contacts[i].get_firstName().empty());
	std::cout << "First name: " << _contacts[i].get_firstName() << std::endl;
	std::cout << "Last name: " << _contacts[i].get_lastName() << std::endl;
	std::cout << "Nickname: " << _contacts[i].get_nickname() << std::endl;
	std::cout << "Phone number: " << _contacts[i].get_phone_nbr() << std::endl;
	std::cout << "Darkest secret: " << _contacts[i].get_secret() << std::endl;
}
