/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 22:07:11 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/06 08:22:52 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//int	main(void)
//{
//	std::cout << "--- CONSTRUCTORS TEST ---" << std::endl;
//	ClapTrap claptrap("CL4PTP");
//	ClapTrap clone(claptrap); //test du constructeur de copie
//	std::cout << "\n--- BASIC ACTIONS TEST ---" << std::endl;
//	claptrap.attack("a new node");//1 énergie
//	claptrap.takeDamage(5);//perd 5hp
//	claptrap.beRepaired(3);//heal de 3hp -1 energie
//	std::cout << "\n--- ENERGY EXHAUSTION TEST ---" << std::endl;
//	for (int i = 0; i < 9; i++)//on le fait attaquer 9 fois pr qu'il ai 0 energie
//	{
//		claptrap.attack("a savage sbonneau");//1 attaque en trop
//	}
//	claptrap.beRepaired(10);//marche pas car plus denergie
//	std::cout << "\n--- DEATH TEST ---" << std::endl;
//	clone.takeDamage(20);//on verifie que ca meurt bien
//	clone.attack("a ghost");//on verifie que qd on meurt on peut pas attaquer
//	std::cout << "\n--- DESTRUCTORS TEST (END OF PROGRAM) ---" << std::endl;
//	return (0);
//}

#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap claptrap("CL4PTP");
	ScavTrap scavtrap("SC4VTP");
	std::cout << std::endl;
	claptrap.attack("hkeromne");
	scavtrap.attack("jcrochet");
	std::cout << std::endl;
	scavtrap.takeDamage(30);
	scavtrap.beRepaired(20);
	std::cout << std::endl;
	scavtrap.guardGate();
	std::cout << std::endl;
	return 0;
}