/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 06:07:00 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/10 02:30:37 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Unknown Animal";
	std::cout << "Default constructor called " << type << " is created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "The Animal " << type << " has been destroyed" << std::endl;
}

Animal::Animal(const Animal& src)
{
	type = src.type;
	std::cout << "Animal copy constructor called : cloning " << type << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
	if (this != &src)
	{
		type = src.type;
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return *this;
}

std::string Animal::getType() const
{
	return type;
}
