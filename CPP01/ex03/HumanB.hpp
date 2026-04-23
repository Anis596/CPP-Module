/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:50:04 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/23 01:24:59 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private :
			Weapon *_weapon;
			std::string _name;
	public :
			HumanB(std::string name);
			~HumanB();
			void attack();
			void setWeapon(Weapon &weapon);//reference obligatoire a cause du main sinon ce serait un clone de l'arme et pas la vrai variable
};

#endif