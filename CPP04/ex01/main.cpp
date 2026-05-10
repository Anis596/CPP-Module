/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 06:06:26 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/10 02:02:48 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main(void)
{
	std::cout << "--- Basic subject tests ---" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;//verif de leak
	std::cout << "\n--- Array of animals tests ---" << std::endl;
	const Animal* animals[4];
	for (int k = 0; k < 2; k++)
		animals[k] = new Dog();
	for (int k = 2; k < 4; k++)
		animals[k] = new Cat();
	for (int k = 0; k < 4; k++)
		delete animals[k];
	std::cout << "\n--- Deep copy tests ---" << std::endl;
	Dog dogA;
	Dog dogB(dogA);
	Cat catA;
	Cat catB;
	catA = catB;
	std::cout << "\n--- End of tests ---" << std::endl;
	return 0;
}