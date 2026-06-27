/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:41:08 by abensaid          #+#    #+#             */
/*   Updated: 2026/06/26 19:22:22 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool ScalarConverter::isChar(const std::string& str) 
{
	if (str.length() == 1 && !std::isdigit(str[0]) && std::isprint(str[0]))
		return true;
	return false;
}

bool ScalarConverter::isInt(const std::string& str)
{
	if (str.empty())
		return false;
	size_t i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (i == str.length())
		return false;
	for (; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

bool ScalarConverter::isFloat(const std::string& str)
{
    if (str == "-inff" || str == "+inff" || str == "nanf")
        return true;
    if (str.empty() || str[str.length() - 1] != 'f')
        return false;
    size_t i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    bool hasDot = false;
    bool hasDigit = false;
    for (; i < str.length() - 1; i++) {
        if (str[i] == '.')
		{
            if (hasDot)
                return false;
            hasDot = true;
        } else if (std::isdigit(str[i])) {
            hasDigit = true;
        } else {
            return false;
        }
    }
    return hasDigit && hasDot;
}

bool ScalarConverter::isDouble(const std::string& str)
{
    if (str == "-inf" || str == "+inf" || str == "nan")
        return true;
    if (str.empty() || str[str.length() - 1] == 'f')
        return false;
    size_t i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    bool hasDot = false;
    bool hasDigit = false;
    for (; i < str.length(); i++) {
        if (str[i] == '.') {
            if (hasDot)
                return false;
            hasDot = true;
        } else if (std::isdigit(str[i])) {
            hasDigit = true;
        } else {
            return false;
        }
    }
    return hasDigit && hasDot;
}

void	ScalarConverter::convert(std::string str)
{
	if (isChar(str))
	{
		char c = str[0];
		int i = static_cast<int>(c);//i = variable qui va stocker
		float f = static_cast<float>(c);//on recupere les infos du char et on les met dans float
		double d = static_cast<double>(c);
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else if (isInt(str))
	{
		long val = std::strtol(str.c_str(), NULL, 10);//10 = base decimale
		if (val < 0 || val > 127)
			std::cout << "char: impossible" << std::endl;
		else if (!std::isprint(val))
			std::cout << "char: Non displayable" << std::endl;
		else
		{
			char c = static_cast<char>(val);
			std::cout << "char: '" << c << "'" << std::endl;
		}
		float f = static_cast<float>(val);
		double d = static_cast<double>(val);
		if (val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max())
		{
			std::cout << "int: impossible" << std::endl;
		}
		else
		{
			int i = static_cast<int>(val);
			std::cout << "int: " << i << std::endl;
		}
		if (val < 1000000 && val > -1000000)
		{
			std::cout << "float: " << f << ".0f" << std::endl;
			std::cout << "double: " << d << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
		}
	}
	else if (isFloat(str))
	{
		if (str == "nanf" || str == "-inff" || str == "+inff")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			if (str == "nanf")
			{
				std::cout << "float: nanf" << std::endl;
				std::cout << "double: nan" << std::endl;
			}
			else if (str == "-inff")
			{
				std::cout << "float: -inff" << std::endl;
				std::cout << "double: -inf" << std::endl;
			}
			else if (str == "+inff")
			{
				std::cout << "float: +inff" << std::endl;
				std::cout << "double: +inf" << std::endl;
			}
			return ;
		}
		double tmp = std::strtod(str.c_str(), NULL);
		float f = static_cast<float>(tmp);
		if (f < 0 || f > 127)
			std::cout << "char: impossible" << std::endl;
		else if (!std::isprint(f))
			std::cout << "char: Non displayable" << std::endl;
		else
		{
			char c = static_cast<char>(f);
			std::cout << "char: '" << c << "'" << std::endl;
		}
		if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
		{
			std::cout << "int: impossible" << std::endl;
		}
		else
		{
			int i = static_cast<int>(f);
			std::cout << "int: " << i << std::endl;
		}
		double d = static_cast<double>(f);
		if ((f < 1000000.0f && f > -1000000.0f) && (f - static_cast<int>(f) == 0.0f))
		{
			std::cout << "float: " << f << ".0f" << std::endl;
			std::cout << "double: " << d << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
		}
	}
	else if (isDouble(str))
	{
		if (str == "nan" || str == "-inf" || str == "+inf")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			if (str == "nan")
			{
				std::cout << "float: nanf" << std::endl;
				std::cout << "double: nan" << std::endl;
			}
			else if (str == "-inf")
			{
				std::cout << "float: -inff" << std::endl;
				std::cout << "double: -inf" << std::endl;
			}
			else if (str == "+inf")
			{
				std::cout << "float: +inff" << std::endl;
				std::cout << "double: +inf" << std::endl;
			}
			return ;
		}
		double d = std::strtod(str.c_str(), NULL);
		if (d < 0 || d > 127)
			std::cout << "char: impossible" << std::endl;
		else if (!std::isprint(d))
			std::cout << "char: Non displayable" << std::endl;
		else
		{
			char c = static_cast<char>(d);
			std::cout << "char: '" << c << "'" << std::endl;
		}
		if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
		{
			std::cout << "int: impossible" << std::endl;
		}
		else
		{
			int i = static_cast<int>(d);
			std::cout << "int: " << i << std::endl;
		}
		bool float_overflow = false;
		if (d < -std::numeric_limits<float>::max() || d > std::numeric_limits<float>::max())
		{
			std::cout << "float: impossible" << std::endl;
			float_overflow = true;
		}
		else
		{
			float f = static_cast<float>(d);
			if ((f < 1000000.0f && f > -1000000.0f) && (f - static_cast<int>(f) == 0.0f))
				std::cout << "float: " << f << ".0f" << std::endl;
			else
				std::cout << "float: " << f << "f" << std::endl;
		}
		if ((d < 1000000.0 && d > -1000000.0) && (d - static_cast<int>(d) == 0.0))
			std::cout << "double: " << d << ".0" << std::endl;
		else
			std::cout << "double: " << d << std::endl;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}
