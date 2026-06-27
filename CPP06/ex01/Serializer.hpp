/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 20:41:25 by abensaid          #+#    #+#             */
/*   Updated: 2026/06/26 19:47:19 by abensaid         ###   ########.fr       */
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

struct Data
{
	int id;
	std::string name;
};

class Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(const Serializer& src);
		Serializer& operator=(const Serializer& src);
	public:
		static uintptr_t serialize(Data* ptr);//uinptr_t = unsigned int de la taille dun pointeur (64 bits)
		//prend un pointeur vers la struct et doit le transformer en entier brut
		static Data* deserialize(uintptr_t raw);//prend lentier brut et le re-transforme en pointeur utilisable
};