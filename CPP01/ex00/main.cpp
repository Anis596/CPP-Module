/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:16:20 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/23 23:54:49 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name1 = "StackZombie";
	std::string name2 = "HeapZombie";
	randomChump(name1);
	Zombie *heapzomb = newZombie(name2);
	heapzomb->announce();
	delete heapzomb;
	return (0);
}
