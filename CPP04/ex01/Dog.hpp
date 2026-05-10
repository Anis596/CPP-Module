/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 06:06:29 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/10 01:11:26 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
			Brain* think;
	public:
			Dog();
			virtual ~Dog();
			Dog(const Dog& src);
			Dog& operator=(const Dog& src);
			virtual void makeSound() const;
};