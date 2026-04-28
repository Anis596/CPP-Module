/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 00:14:55 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/28 02:05:51 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	n = 0;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (n);
}

void Fixed::setRawBits( int const raw )
{
	n = raw;
}

Fixed::Fixed(const Fixed &param) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = param;
}

Fixed& Fixed::operator=(const Fixed &param) 
{
	if (this != &param)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->n = param.getRawBits();
	}
	return *this;
}
