/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 01:29:44 by abensaid          #+#    #+#             */
/*   Updated: 2026/04/23 03:14:06 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty())
	{
		std::cerr << "Error: The string to replace cannot be empty." << std::endl;
		return (1);
	}
	std::ifstream filein(filename.c_str());//fonction qui met filename en char * pendant la creation de filein sinon ifstream ne peut pas open
	if (!filein.is_open())
	{
		std::cerr << "Error while open .txt" << std::endl;
		return (1);
	}
	std::string newfile = filename + ".replace";
	std::ofstream fileout(newfile.c_str());
	if (!fileout.is_open())
	{
		std::cerr << "Error while create .txt.replace";
		return (1);
	}
	std::string line;
	// La boucle tourne TANT QUE getline arrive à lire une ligne depuis 'filein' et à la ranger dans 'line'
	while (std::getline(filein, line))
	{
		size_t pos = line.find(s1);
		while (pos != std::string::npos)//npos = code d'erreur que contient pos si find ne trv pas le mot
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		fileout << line << std::endl;
	}
	return (0);
}
