/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 05:34:26 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/04 00:44:38 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)//mettre _n = a n
{}

Span::Span() : _n(0)
{}

Span::~Span()
{
}

Span::Span(const Span& other)
{
	_n = other._n;
	container = other.container;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_n = other._n;
		container = other.container;
	}
	return *this;
}

void	Span::addNumber(int n)
{
	if (container.size() >= _n)
	{
		throw std::out_of_range("Span is fat asf");
	}
	else
		container.push_back(n);
}

unsigned int Span::shortestSpan()
{
	if (container.size() <= 1)
	{
		throw std::logic_error("Not enough numbers");
	}
	std::sort(container.begin(), container.end());//tri le tab du plus petit au plus grand
	unsigned int min_span = container[1] - container[0];
	for (std::vector<int>::iterator it = container.begin(); it != container.end() - 1; ++it)
	{
		unsigned int diff = *(it + 1) - *it;//on verif la distance entre les 2
		if (diff < min_span)
			min_span = diff;//on modif si necessaire
	}
	return min_span;
}

unsigned int Span::longestSpan()
{
	if (container.size() <= 1)
	{
		throw std::logic_error("Not enough numbers");
	}
	std::sort(container.begin(), container.end());
	return container.back() - container.front();//back = derniere case front premiere
}
