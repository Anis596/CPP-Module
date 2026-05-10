/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 06:06:57 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/10 01:56:09 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	think = new Brain();
	type = "Cat";
	std::cout << "Default constructor called " << type << " is created" << std::endl;
}

Cat::~Cat()
{
	delete think; 
	std::cout << "Cat " << type << " has been destroyed" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	think = new Brain(*(src.think));//creer un nv Brain en utilisant le constructeur de recopie de la class Brain en donnant src.think comme modele
	std::cout << "Cat copy constructor called : cloning " << type << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	if (this != &src)
	{
		Animal::operator=(src);//copie du "type (dog/cat)" fait par la class Animal
		*think = *(src.think);//copie des idees fait par la class Brain
		std::cout << "Copy Cat assignment operator called" << std::endl;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "* Cat meow *" << std::endl;
}
