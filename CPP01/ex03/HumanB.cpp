/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:50:06 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/23 01:26:34 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (_weapon != NULL)
	{
			std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	}
}