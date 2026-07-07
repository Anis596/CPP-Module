/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 02:49:06 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/07 05:03:57 by abensaid         ###   ########.fr       */
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

template <typename T>
class MutantStack : public std::stack<T>//on herite de stack pr pouvoir utiliser les fonctions push pop top sans les recoder
{
	public:
		MutantStack() {}
		~MutantStack() {}
		MutantStack(const MutantStack& other) : std::stack<T>(other) {}
		MutantStack& operator=(const MutantStack& other) 
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;//un typedef pr ne pas avoir a retaper cette ligne partt pr utiliser literateur de ::deque
		iterator begin()
		{
			return this->c.begin();//c = std::deque et this psk le compilateur cherche ds la class mutantstack sinn
		}
		iterator end()
		{
			return this->c.end();
		}
};
