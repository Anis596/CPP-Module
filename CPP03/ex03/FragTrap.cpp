/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 08:18:52 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/07 05:49:33 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_life = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "A Default FragTrap appeared ! and he will beat fbenech's ass out" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "The FragTrap " << _name << " has been destroyed goodbye" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)//pr eviter le passage par le constructeur par defaut et dcp donner direct le bon nom et pas afficher un "Default"
{
	_life = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap " << _name << " has been made by the Operation Constructor!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)//pareil qu'en haut
{
	_life = src._life;
	_energy = src._energy;
	_attack = src._attack;
	std::cout << "FragTrap copy constructor called: cloning " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	if (this !=  &src)
	{
		_name = src._name;
		_life = src._life;
		_energy = src._energy;
		_attack = src._attack;
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << " FragTrap " << _name << " raises his hand and enthusiastically requests a high five! " << std ::endl;
}
