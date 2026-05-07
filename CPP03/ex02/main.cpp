/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 22:07:11 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/07 05:44:37 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "--- CREATION ---" << std::endl;
	ClapTrap claptrap("CL4PTP");
	FragTrap fragtrap("FR4GTP");
	std::cout << "\n--- ACTIONS ---" << std::endl;
	// FragTrap utilise l'attaque de base héritée de ClapTrap (ou sa propre attaque si tu l'avais redéfinie)
	fragtrap.attack("fbenech");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(10);
	std::cout << "\n--- SPECIAL ABILITY ---" << std::endl;
	fragtrap.highFivesGuys();
	std::cout << "\n--- DESTRUCTION ---" << std::endl;
	return 0;
}