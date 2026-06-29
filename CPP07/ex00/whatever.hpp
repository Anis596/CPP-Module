/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 00:28:34 by abensaid          #+#    #+#             */
/*   Updated: 2026/06/29 04:53:55 by abensaid         ###   ########.fr       */
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

 template <typename T>
void swap(T& val, T& val2)
{
	T tmp;
	tmp = val;
	val = val2;
	val2 = tmp;
}

 template <typename T>
T min(T val1, T val2)
{
	if (val2 <= val1)
		return val2;
	return val1;
}

 template <typename T>
T max(T val1, T val2)
{
	if (val2 >= val1)
		return val2;
	return val1;
}
