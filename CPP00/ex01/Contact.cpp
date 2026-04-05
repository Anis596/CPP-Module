/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 02:37:35 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/05 04:42:31 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
//using namespace std;
bool Contact::set_contact()
{
	do
	{
		std::cout << "First name : ";
		if (!std::getline(std::cin, _first_name))
			return (false);
	} while (_first_name == "");
	do
	{
		std::cout << "Last name : ";
		if (!std::getline(std::cin, _last_name))
			return (false);
	} while (_last_name == "");
	do
	{
		std::cout << "Nickame : ";
		if (!std::getline(std::cin, _nickname))
			return (false);
	} while (_nickname == "");
	do
	{
		std::cout << "Phone number : ";
		if (!std::getline(std::cin, _phone_nbr))
			return (false);
	} while (_phone_nbr == "");
	do
	{
		std::cout << "Secret : ";
		if (!std::getline(std::cin, _secret))
			return (false);
	} while (_secret.empty());
	return (true);
}

std::string Contact::get_firstName()
{
	return (_first_name);
}

std::string Contact::get_lastName()
{
	return (_last_name);
}

std::string Contact::get_nickname()
{
	return (_nickname);
}

std::string Contact::get_phone_nbr()
{
	return (_phone_nbr);
}

std::string Contact::get_secret()
{
	return (_secret);
}
