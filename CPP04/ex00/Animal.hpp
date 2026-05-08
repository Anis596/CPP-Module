/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 06:07:03 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/08 07:05:39 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iomanip>
#include <iostream>

class Animal
{
	protected:
			std::string type;
	public:
			Animal();//constructeur par defaut
			virtual ~Animal();//destructeur en virtual pr pouvoir appeler le destructeur des classes qui herite de animal
			Animal(const Animal& src);//constructeur de recopie
			Animal& operator=(const Animal& src);//operateur d'affection
			virtual void makeSound() const;//const pr dire au compilateur quon ne modif aucune var de la classe
			//virtual car sinon le compilateur va voir la variable de type Animal et exec makeSound de la class Animal avc virtual il va verifier le pointeur au bout de ce mot cle
			std::string getType() const;//pr pouvoir acceder a type ds le main
};