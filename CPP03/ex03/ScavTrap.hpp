/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 03:33:57 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/07 03:18:55 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class ScavTrap : virtual public ClapTrap//virtual pr eviter les pb de compilation de memoire, remplace l'inclusion physique de la class CLapTrap en memoire par un pointeur vptr a linterieur de notre class
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