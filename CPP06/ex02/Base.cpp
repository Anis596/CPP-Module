/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 19:56:42 by abensaid          #+#    #+#             */
/*   Updated: 2026/06/27 22:11:06 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

Base * generate(void)
{
	int	random_val = rand() % 3;
	if (random_val == 0)
	{
		std::cout << "Generated class A" << std::endl;
		return new A;
	}
	else if (random_val == 1)
	{
		std::cout << "Generated class B" << std::endl;
		return new B;
	}
	else
	{
		std::cout << "Generated class C" << std::endl;
		return new C;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))//le cast renvoie une adresse et rentre si c un A
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
}