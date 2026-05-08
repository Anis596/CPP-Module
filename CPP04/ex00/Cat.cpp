/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 06:06:57 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/08 06:47:19 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default constructor called " << type << " is created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " has been destroyed" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	std::cout << "Cat copy constructor called : cloning " << type << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	if (this != &src)
	{
		Animal::operator=(src);
		std::cout << "Copy Cat assignment operator called" << std::endl;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "* Cat meow *" << std::endl;
}
