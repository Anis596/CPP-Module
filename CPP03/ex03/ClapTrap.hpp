/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 22:07:08 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/06 05:29:12 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>

class ClapTrap
{
	protected:
			std::string _name;
			int	_life;
			int	_attack;
			int	_energy;
	public:
			ClapTrap();
			~ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& src);//créer un nouveau robot qui est le clone d'un ancien (il reçoit son nom et ses paramètres dès la naissance).
			ClapTrap& operator=(const ClapTrap& src);//fonction qui permet de
//parametrer le = pour notre class que le C++ ne connait pas
			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
};
