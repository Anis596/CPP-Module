/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 03:33:59 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/07 05:50:40 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_life = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "A Default ScavTrap appeared !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "The ScavTrap " << _name << " has been destroyed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)//pr eviter le passage par le constructeur par defaut et dcp donner direct le bon nom et pas afficher un "Default"
{
	_life = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)//pareil qu'en haut
{
	_life = src._life;
	_energy = src._energy;
	_attack = src._attack;
	std::cout << "ScavTrap copy constructor called: cloning " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
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

void ScavTrap::attack(const std::string& target)
{
	if (_life > 0 && _energy > 0)
	{
		_energy--;
		std::cout << "ScavTrap " << _name << " throw a heavy attack " << target << " causing " << _attack << " points of damage!" << std::endl;
	}
	else if (_energy == 0)
		std::cout << "ScavTrap " << _name << " has no energy" << std::endl;
	else if (_life <= 0)// <= 0 vu que les degats ne sont pas fixes
		std::cout << "ScavTrap " << _name << " is broken and can't attack" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode " << std::endl;
}
