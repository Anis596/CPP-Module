/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 09:55:59 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/13 07:30:54 by abensaid         ###   ########.fr       */
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

class RPN
{
	private:
		std::stack<long> containers;
	public:
		RPN();
		~RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		void calculate(const std::string& expression);
		bool isOperator(char c);
};