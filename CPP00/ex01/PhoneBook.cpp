/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 02:41:52 by abensaid          #+#    #+#             */
/*   Updated: 2026/01/24 02:56:14 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
}

void	PhoneBook::add()
{
	int	pos;
	if (_index < 8)
		pos = _index;
	else
		pos = 0;

	_contacts[pos].set_contact();
	_index++;
}
