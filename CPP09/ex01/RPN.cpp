/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 09:55:57 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/13 08:45:45 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
		this->containers = other.containers;
	return *this;
}

bool RPN::isOperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

void RPN::calculate(const std::string& expression)
{
	for (size_t i = 0; i < expression.length(); ++i)
	{
		char c = expression[i];
		if (c == ' ')
			continue;
		else if (isdigit(c))
		{
			int nb = expression[i] - '0';
			containers.push(nb);
		}
		else if (isOperator(c))
		{
			if (containers.size() < 2)
			{
				std::cerr << "Error\n";
				return;
			}
			int	nb2 = containers.top();
			containers.pop();
			int	nb1 = containers.top();
			containers.pop();
			if (c == '+')
				containers.push(nb1 + nb2);
			else if (c == '-')
				containers.push(nb1 - nb2);
			else if (c == '*')
				containers.push(nb1 * nb2);
			else if (c == '/')
			{
				if (nb2 == 0)//si tu divises par 0 ca crash
				{
					std::cerr << "Error\n";
					return;
				}
				containers.push(nb1 / nb2);
			}
		}
		else//si c ni des chiffres ni un operateur
		{
			std::cerr << "Error\n";
			return;
		}
	}
	if (containers.size() == 1)
	{
		std::cout << containers.top() << std::endl;
	}
	else
		std::cerr << "Error\n";
}
