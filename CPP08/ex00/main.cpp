/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 01:20:40 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/02 05:28:12 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> tab;
	tab.push_back(10);//remplir le tab de nbr
	tab.push_back(20);
	tab.push_back(42);
	tab.push_back(50);
	std::cout << "--- TEST START ---" << std::endl;
	try
	{
		std::cout << "Test 1: 42" << std::endl;
		easyfind(tab, 42);
		std::cout << "\nTest 2: 999" << std::endl;
		easyfind(tab, 999);//throw exception
		std::cout << "Throw error!" << std::endl;//n'est pas censer sexecuter si le throw a marcher
	}
	catch (const std::exception& e) 
	{
		std::cerr << "Exception caught: Value not found." << std::endl;
	}
	std::cout << "--- TEST END ---" << std::endl;
	return 0;
}
