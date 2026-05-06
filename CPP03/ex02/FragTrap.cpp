/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 08:18:52 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/06 08:33:19 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_life = 100;
	_energy = 50;
	_attack = 20;
	_name = "Default";
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
	_name = name;
	std::cout << "FragTrap " << _name << " has been made by the Operation Constructor!" << std::endl;
}

