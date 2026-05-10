/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 07:10:18 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/08 07:18:13 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "Default constructor called " << type << " is created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "The WrongCat " << type << " has been destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called : cloning " << type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	if (this != &src)
	{
		WrongAnimal::operator=(src);
		std::cout << "Copy WrongCat assignment operator called" << std::endl;
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "* Undefined WrongCat sound *" << std::endl;
}
