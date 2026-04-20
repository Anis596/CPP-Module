/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:16:07 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/21 00:04:00 by abensaid         ###   ########.fr       */
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
			~Zombie();
			void announce( void );
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
#endif