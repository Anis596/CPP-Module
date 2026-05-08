/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 07:06:03 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/08 07:13:19 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Unknown WrongAnimal";
	std::cout << "Default constructor called " << type << " is created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "The WrongAnimal " << type << " has been destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	type = src.type;
	std::cout << "WrongAnimal copy constructor called : cloning " << type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	if (this != &src)
	{
		type = src.type;
		std::cout << "Copy WrongAnimal assignment operator called" << std::endl;
	}
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "* Undefined WrongAnimal sound *" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}
