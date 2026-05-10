/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 06:06:26 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/10 00:26:30 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "--- TEST DES BONS ANIMAUX (POLYMORPHISME) ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // Va afficher le miaulement !
	j->makeSound(); // Va afficher l'aboiement !
	meta->makeSound();
	// On libère la mémoire pour éviter les leaks
	delete meta;
	delete j;
	delete i;
	std::cout << "\n--- TEST DES MAUVAIS ANIMAUX (ECHEC DU POLYMORPHISME) ---" << std::endl;
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();
	std::cout << wrong_i->getType() << " " << std::endl;
	// Le piège se referme : ça va afficher le son générique de WrongAnimal !
	wrong_i->makeSound(); 
	wrong_meta->makeSound();
	// On libère la mémoire
	delete wrong_meta;
	delete wrong_i;
	std::cout << "\n--- TEST DE L'OPERATEUR D'AFFECTATION ---" << std::endl;
	WrongCat chatA;
	WrongCat chatB;
	chatB = chatA; // C'est ICI que ta fameuse phrase va s'afficher !
	return 0;
}
