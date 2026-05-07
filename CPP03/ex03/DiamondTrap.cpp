/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 03:03:02 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/07 05:57:41 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap("Default"), FragTrap("Default")
{
	_life = 100;
	_energy = 50;
	_attack = 30;
	_name = "Default";
	std::cout << "A Default DiamondTrap appeared ! and he is a weirdo" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "The DiamondTrap " << _name << " has been destroyed goodbye" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)//pr eviter le passage par le constructeur par defaut et dcp donner direct le bon nom et pas afficher un "Default"
{
	this->_name = name;//le nom de la var modifier donc le _name de la class Diamond
	_life = 100;
	_energy = 50;
	_attack = 30;
	std::cout << "DiamondTrap " << this->_name << " has been created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src), ScavTrap(src), FragTrap(src)//pareil qu'en haut
{
	_name = src._name;
	_life = src._life;
	_energy = src._energy;
	_attack = src._attack;
	std::cout << "DiamondTrap copy constructor called: cloning " << _name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this !=  &src)
	{
		ClapTrap::operator=(src);
		_name = src._name;
		std::cout << "Copy diamond assignment operator called" << std::endl;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap " << this->_name << " but my original ClapTrap is " << ClapTrap::_name << "!" << std::endl;//Claptrap:: pr preciser quon veut afficher le nom de la variable _name de la class CLapTrap et pas de la diamond
}
