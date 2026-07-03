/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 01:20:38 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/03 22:57:17 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <limits>
#include <stdint.h>
#include <exception>
#include <algorithm>
#include <vector>
//stl standard template library
template <typename T>
void easyfind(T& containers, int n)
{
	typename T::iterator it;//typename pr montrer que iterator c un type de donnees
	it = std::find(containers.begin(), containers.end(), n);//on cherche n ds containers
	if (it == containers.end())//si it ne trv pas n dans containers il devient le dernier nbr du tableau
	{
		throw std::exception();
	}
	else
		std::cout << "n value is : " << *it << std::endl;
}
