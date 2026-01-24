/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 02:37:35 by abensaid          #+#    #+#             */
/*   Updated: 2026/01/24 02:23:38 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_contact()
{
	do 
	{
		std::cout << "First name : ";
		std::getline(std::cin, first_name);
	} while (first_name == "");
	do
	{
		std::cout << "Last name : ";
		std::getline(std::cin, last_name);
	} while (last_name == "");
	do
	{
		std::cout << "Nickame : ";
		std::getline(std::cin, nickname);
	} while (nickname == "");
	do
	{
		std::cout << "Phone number : ";
		std::getline(std::cin, phone_nbr);
	} while (phone_nbr == "");
	do
	{
		std::cout << "Secret : ";
		std::getline(std::cin, secret);
	} while (secret.empty());
}

std::string Contact::get_firstName()
{
	return (first_name);
}

std::string Contact::get_lastName()
{
	return (last_name);
}

std::string Contact::get_nickname()
{
	return (nickname);
}

std::string Contact::get_phone_nbr()
{
	return (phone_nbr);
}

std::string Contact::get_secret()
{
	return (secret);
}
