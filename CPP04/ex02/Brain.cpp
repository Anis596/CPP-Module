/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 00:27:42 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/10 00:58:37 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain()
{
	std::cout << "Brain destuctor has been called" << std::endl;
}

Brain::Brain()
{
	std::cout << "Brain default constructor has been called" << std::endl;
}

Brain::Brain(const Brain& src)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = src.ideas[i];
	}
	std::cout << "Brain copy constructor has been called" << std::endl;
}

Brain& Brain::operator=(const Brain& src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
		std::cout << "Brain assignment operator has been called" << std::endl;
	}
	return *this;
}