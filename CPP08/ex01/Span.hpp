/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 05:34:28 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/05 02:44:36 by abensaid         ###   ########.fr       */
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

class Span
{
	private:
		std::vector<int> container;
		unsigned int _n;//taille max du tableau container
	public:
		Span(unsigned int n);
		Span();
		~Span();
		Span(const Span& other);
		Span& operator=(const Span& other);
		void addNumber(int n);
		unsigned int shortestSpan();
		unsigned int longestSpan();

	template <typename Iterator>
	void addNumber(Iterator begin, Iterator end)
	{
		unsigned int dist = std::distance(begin, end);//calcul de cb de nbr on veut ajter
		if (container.size() + dist > _n)//verif si on a la place
		{
			throw std::out_of_range("Not enough space for this range");
		}
		container.insert(container.end(), begin, end);//on insere a la fin de container tt les elements copier depuis begin jusqua end
	}
};