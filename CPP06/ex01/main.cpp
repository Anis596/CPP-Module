/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 20:41:29 by abensaid          #+#    #+#             */
/*   Updated: 2026/06/26 19:43:33 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

#include "Serializer.hpp"
#include <iostream>

#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Data		myData;
	myData.id = 8;
	myData.name = "Rantanplan";
	Data*		ptr = &myData;
	std::cout << "--- BEFORE SERIALIZATION ---" << std::endl;
	std::cout << "Original address : " << ptr << std::endl;
	std::cout << "ID               : " << ptr->id << std::endl;
	std::cout << "Name             : " << ptr->name << std::endl;
	std::cout << std::endl;
	uintptr_t	raw = Serializer::serialize(ptr);
	std::cout << "--- DURING ---" << std::endl;
	std::cout << "Raw value (int)  : " << raw << std::endl;
	std::cout << std::endl;
	Data*		new_ptr = Serializer::deserialize(raw);
	std::cout << "--- AFTER DESERIALIZATION ---" << std::endl;
	std::cout << "New address      : " << new_ptr << std::endl;
	std::cout << "ID               : " << new_ptr->id << std::endl;
	std::cout << "Name             : " << new_ptr->name << std::endl;
	std::cout << std::endl;
	std::cout << "--- FINAL VERIFICATION ---" << std::endl;
	if (ptr == new_ptr)
		std::cout << "SUCCESS: Address was perfectly preserved!" << std::endl;
	else
		std::cout << "ERROR: Addresses do not match." << std::endl;
	return 0;
}