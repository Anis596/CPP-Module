/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:49:58 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/22 01:15:29 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iomanip>
#include <string>
#include <iostream>

class Weapon
{
	private :
			std::string _type;
	public :
		Weapon(std::string type);
		const std::string &getType() const;
		void setType(std::string newType);
};

#endif