/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 09:27:00 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/14 02:44:30 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		this->vect = other.vect;
		this->deq = other.deq;
	}
	return *this;
}

void PmergeMe::parse(int ac, char **av)
{
	for (int i = 1; i < ac; ++i)
	{
		std::string args = av[1];
		if (args.empty())
			throw std::invalid_argument("Error: empty argument.");
		for (size_t j = 0; j < args.length(); ++j)
		{
			if (!isdigit(args[j]))
				throw std::invalid_argument("Error: not a positive integer.");
		}
		long value = std::atol(args.c_str());//verif overflow
		if (value > INT_MAX)
			throw std::invalid_argument("Error: number too large.");
		vect.push_back(static_cast<int>(value));
		deq.push_back(static_cast<int>(value));
	}
}
