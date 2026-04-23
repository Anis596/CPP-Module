/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:49:59 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/23 00:59:45 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

const std::string& Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(std::string newType)
{
	_type = newType;
}
