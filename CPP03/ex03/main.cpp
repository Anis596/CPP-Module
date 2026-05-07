/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 22:07:11 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/07 05:54:21 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "--- CREATION ---" << std::endl;
	DiamondTrap diamond("D14M0ND");
	std::cout << "\n--- ACTIONS ---" << std::endl;
	diamond.attack("to sbonneau");
	diamond.takeDamage(30);
	diamond.beRepaired(15);
	std::cout << "\n--- SPECIAL ABILITY ---" << std::endl;
	diamond.whoAmI();
	std::cout << "\n--- DESTRUCTION ---" << std::endl;
	return 0;
}

//int main(void)
//{
//	std::cout << "\n========== TEST 1: CREATION & CORE ABILITIES ==========" << std::endl;
//	DiamondTrap boss("FinalBoss");
//	std::cout << "\n--- Testing basic actions ---" << std::endl;
//	boss.attack("a poor ClapTrap");
//	boss.takeDamage(50);
//	boss.beRepaired(25);
//	std::cout << "\n--- Testing special abilities ---" << std::endl;
//	boss.guardGate();
//	boss.highFivesGuys();
//	boss.whoAmI();
//	std::cout << "\n========== TEST 2: CANONICAL FORM ==========" << std::endl;
//	std::cout << "--- Default Constructor ---" << std::endl;
//	DiamondTrap defaultBot;
//	defaultBot.whoAmI();
//	std::cout << "\n--- Copy Constructor ---" << std::endl;
//	DiamondTrap cloneBot(boss);
//	cloneBot.whoAmI();
//	std::cout << "\n--- Assignment Operator ---" << std::endl;
//	DiamondTrap assignBot("TemporaryName");
//	assignBot = boss;
//	assignBot.whoAmI();
//	std::cout << "\n========== TEST 3: ENERGY DEPLETION ==========" << std::endl;
//	DiamondTrap tiredBot("TiredBot");
//	for (int i = 0; i < 52; i++)
//	{
//		tiredBot.attack("a training dummy");
//	}
//	tiredBot.beRepaired(10);
//	std::cout << "\n========== TEST 4: HP DEPLETION ==========" << std::endl;
//	DiamondTrap deadBot("DeadBot");
//	deadBot.takeDamage(150);
//	deadBot.takeDamage(10);
//	deadBot.attack("a ghost");
//	deadBot.beRepaired(50);
//	deadBot.whoAmI();
//	std::cout << "\n========== END OF TESTS (DESTRUCTION SEQUENCE) ==========" << std::endl;
//	return 0;
//}
