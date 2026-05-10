/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 06:06:32 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/10 01:55:40 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	think = new Brain();
	type = "Dog";
	std::cout << "Default constructor called " << type << " is created" << std::endl;
}

Dog::~Dog()
{
	delete think;
	std::cout << "Dog " << type << " has been destroyed" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	think = new Brain(*(src.think));//creer un nv Brain en utilisant le constructeur de recopie de la class Brain en donnant src.think comme modele
	std::cout << "Dog copy constructor called : cloning " << type << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
	if (this != &src)
	{
		Animal::operator=(src);//copie du "type (dog/cat)" fait par la class Animal
		*think = *(src.think);//copie des idees fait par la class Brain
		std::cout << "Copy Dog assignment operator called" << std::endl;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "* Dog barking *" << std::endl;
}
