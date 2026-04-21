/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 00:19:07 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/21 23:11:50 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
	private :
			std::string _name;
	public :
			Zombie(std::string name);
			Zombie();
			~Zombie();
			void announce( void );
			void setName(std::string name);
};
Zombie* zombieHorde( int N, std::string name );

#endif