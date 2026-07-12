/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 05:24:40 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/12 01:01:44 by abensaid         ###   ########.fr       */
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
#include <stdexcept>
#include <stack>
#include <deque>
#include <list>
#include <map>
#include <sstream>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _database;//1er argument = key (la date) donc ou aller chercher, 2e arg = valeur le prix
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		void loadDatabase(std::string const& filename);
		void check_input(std::string const& filename);
		bool isValidDate(const std::string& date);
		bool isValidValue(float value) const;
};
