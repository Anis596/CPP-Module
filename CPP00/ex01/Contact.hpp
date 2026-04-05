/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 02:42:44 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/05 04:41:20 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_nbr;
		std::string _secret;

	public:
		bool set_contact();
		std::string get_firstName();
		std::string get_lastName();
		std::string get_nickname();
		std::string get_phone_nbr();
		std::string get_secret();
};

#endif
