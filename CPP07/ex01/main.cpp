/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 04:54:16 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/01 20:59:23 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	jcrochet(int& element)
{
	std::cout << element << std::endl;
}

int	main()
{
	int	tab[] = {1, 2, 3, 4, 5};
	size_t size = 5;
	::iter(tab, size, jcrochet);
	return (0);
}
