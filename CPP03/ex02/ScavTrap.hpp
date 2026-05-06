/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 03:33:57 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/06 06:30:51 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class ScavTrap : public ClapTrap
{
	private:
			
	public:
			ScavTrap();
			~ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap& src);//créer un nouveau robot qui est le clone d'un ancien (il reçoit son nom et ses paramètres dès la naissance).
			ScavTrap& operator=(const ScavTrap& src);
			void attack(const std::string& target);
			void guardGate();
};