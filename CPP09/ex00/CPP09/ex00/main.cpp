/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 05:24:43 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/09 09:47:48 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << "\n";
		return 1;
	}
	BitcoinExchange btc;
	btc.loadDatabase("data/data.csv");
	btc.check_input(av[1]);
	return 0;
}
