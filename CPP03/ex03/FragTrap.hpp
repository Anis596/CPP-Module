/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 08:18:54 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/07 03:19:04 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class FragTrap : virtual public ClapTrap//virtual pr eviter les pb de compilation de memoire, remplace l'inclusion physique de la class CLapTrap en memoire par un pointeur vptr a linterieur de notre class
{
	private:
			
	public:
			FragTrap();
			~FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap& src);//créer un nouveau robot qui est le clone d'un ancien (il reçoit son nom et ses paramètres dès la naissance).
			FragTrap& operator=(const FragTrap& src);
			void highFivesGuys(void);
};