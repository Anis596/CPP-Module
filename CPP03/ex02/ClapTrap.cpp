/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 22:07:13 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/06 01:10:46 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_life = 10;
	_energy = 10;
	_attack = 0;
	_name = "Default";
	std::cout << "A Default ClapTrap appeared !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "The ClapTrap " << _name << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_life = 10;
	_energy = 10;
	_attack = 0;
	_name = name;
	std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	_name = src._name;
	_life = src._life;
	_energy = src._energy;
	_attack = src._attack;
	std::cout << "ClapTrap copy constructor called: cloning " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
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

void ClapTrap::attack(const std::string& target)
{
	if (_life > 0 && _energy > 0)
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " attack " << target << " causing " << _attack << " points of damage!" << std::endl;
	}
	else if (_energy == 0)
		std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
	else if (_life <= 0)// <= 0 vu que les degats ne sont pas fixes
		std::cout << "ClapTrap " << _name << " is broken and can't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " take " << amount << " damage!" << std::endl;
	if (amount >= (unsigned int)_life)
		_life = 0;
	else
		_life -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_life > 0 && _energy > 0)
	{
		_energy--;
		_life += amount;
		std::cout << "ClapTrap " << _name << " restores " << amount << " hp" << std::endl;
	}
	else if (_energy == 0)
		std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
	else if (_life <= 0)// <= 0 vu que les degats ne sont pas fixes
		std::cout << "ClapTrap " << _name << " is broken and can't restores his hp" << std::endl;
}
