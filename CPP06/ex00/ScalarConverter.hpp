/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:41:11 by abensaid          #+#    #+#             */
/*   Updated: 2026/06/26 00:42:44 by abensaid         ###   ########.fr       */
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

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& src);
		ScalarConverter& operator=(const ScalarConverter& src);
		static bool isChar(const std::string& str);
		static bool isInt(const std::string& str);
		static bool isFloat(const std::string& str);
		static bool isDouble(const std::string& str);
	public:
		static void	convert(std::string str);//static pr pouvoir appeler la fonction sans instancier d'objet
};