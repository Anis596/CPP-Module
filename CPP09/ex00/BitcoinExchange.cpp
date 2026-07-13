/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 05:24:38 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/09 09:50:44 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		this->_database = other._database;
	return *this;
}

void BitcoinExchange::loadDatabase(std::string const& filename)
{
	std::ifstream file(filename.c_str());//ifstream pr lire ds un fichier
	if (!file.is_open())
	{
		std::cerr << "Error: cannot open file" << std::endl;
		return;
	}
	std::string line;
	std::getline(file, line);//pr skip la 1ere ligne
	while (std::getline(file, line))
	{
		size_t pos = line.find(',');
		if (pos != std::string::npos)//si on arrv pas a eof/l
		{
			std::string date = line.substr(0, pos);//du debut de la chaine jusqua la virgule = fin de la date
			std::string pricestr = line.substr(pos + 1);//1seul param fait que substr prend tt le reste de la ligne et + 1 pr pas prendre la virgule
			float price;
			std::stringstream ps(pricestr);//stringstream prend pricestr lis son texte
			ps >> price;//ps fais la conversion en binaire et env le result ds price
			_database[date] = price;
		}
	}
}

bool BitcoinExchange::isValidDate(const std::string& date)
{
	if (date.length() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	for (int i = 0; i < 10; ++i)
	{
		if (i == 4 || i == 7)
			continue;//skip les '-'
		if (!isdigit(date[i]))
			return false;
	}
	int year = std::atoi(date.substr(0, 4).c_str());//verif que la date est valide
	int month = std::atoi(date.substr(5, 2).c_str());//va a l'index 5 et prend 2 caracteres
	int day = std::atoi(date.substr(8, 2).c_str());
	if (year < 2009)
		return false;//bitcoin existait pas
	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > 31)
		return false;
	return true;
}

bool BitcoinExchange::isValidValue(float value) const
{
	if (value < 0.0f)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}
	if (value > 1000.0f)
	{
		std::cerr << "Error: too large number." << std::endl;
		return false;
	}
	return true;
}

void BitcoinExchange::check_input(std::string const& filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: cannot open file" << std::endl;
		return;
	}
	std::string line;
	while (std::getline(file, line))
	{
		if (line == "date | value")
			continue;
		size_t pos = line.find('|');
		if (pos != std::string::npos)
		{
			std::string date = line.substr(0, pos - 1);
			std::string pricestr = line.substr(pos + 2);//2 pr skip pipe et espace
			if (!isValidDate(date))
			{
				std::cerr << "Error: bad input => " << date << "\n";
				continue;//remonte au debut du while
			}
			float price;
			std::stringstream ps(pricestr);
			ps >> price;
			if (!isValidValue(price))
				continue;
			std::map<std::string, float>::iterator it = _database.lower_bound(date);//it pointe sur la cle donc la date
			if (it != _database.end() && it->first == date)
				std::cout << date << " => " << price << " = " << (price * it->second) << "\n";//price = quantite de btc, it->second = prix d'1 btc en $
			else
			{
				if (it == _database.begin())
					std::cerr << "Error: no historic data found before this date => " << date << "\n";
				else
				{
					--it;//on retourne a la date d'avant
					std::cout << date << " => " << price << " = " << (price * it->second) << "\n";
				}
			}
			
		}
		else
			std::cerr << "Error: bad input => " << line << "\n";
	}
}
