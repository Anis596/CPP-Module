/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:50:10 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/23 01:05:45 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
}
//liste d'initialisation car une reference ne peut pas naitre vide elle doit etre attache des quelle est creer
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name)
{
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
