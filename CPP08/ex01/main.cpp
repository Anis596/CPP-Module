/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 05:34:24 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/05 02:47:11 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		std::cout << "--- TEST 1: Basic ---" << std::endl;
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest: " << sp.shortestSpan() << "\nLongest:  " << sp.longestSpan() << std::endl;
		std::cout << "\n--- TEST 2: 10,000 numbers ---" << std::endl;
		Span bigSp(10000);
		std::vector<int> bigVector;
		for (int i = 0; i < 10000; i++)
			bigVector.push_back(i * 2);//de 0 a 19998
		bigSp.addNumber(bigVector.begin(), bigVector.end());
		std::cout << "Shortest: " << bigSp.shortestSpan() << "\nLongest:  " << bigSp.longestSpan() << std::endl;
	}
	catch (const std::exception& e) 
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
