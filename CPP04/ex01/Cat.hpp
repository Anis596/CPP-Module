/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 06:06:35 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/10 01:06:07 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
			Brain* think;
	public:
			Cat();
			virtual ~Cat();
			Cat(const Cat& src);
			Cat& operator=(const Cat& src);
			virtual void makeSound() const;
};