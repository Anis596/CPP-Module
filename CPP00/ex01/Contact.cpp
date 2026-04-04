/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 02:37:35 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/04 07:49:27 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
//using namespace std;
void Contact::set_contact()
{
	do
	{
		std::cout << "First name : ";
		std::getline(std::cin, _first_name);
	} while (_first_name == "");
	do
	{
		std::cout << "Last name : ";
		std::getline(std::cin, _last_name);
	} while (_last_name == "");
	do
	{
		std::cout << "Nickame : ";
		std::getline(std::cin, _nickname);
	} while (_nickname == "");
	do
	{
		std::cout << "Phone number : ";
		std::getline(std::cin, _phone_nbr);
	} while (_phone_nbr == "");
	do
	{
		std::cout << "Secret : ";
		std::getline(std::cin, _secret);
	} while (_secret.empty());
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
