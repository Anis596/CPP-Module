/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:50:08 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/22 22:40:11 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private :
			Weapon &_weapon;
			std::string _name;
	public :
			HumanA(std::string name, Weapon &weapon);
			~HumanA();
			void attack();
};

#endif