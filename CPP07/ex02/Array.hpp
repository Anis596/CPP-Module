/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 21:02:06 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/02 00:17:06 by abensaid         ###   ########.fr       */
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
#include <exception>

template <typename T>
class Array
{
	private:
		T	*_tab;
		unsigned int _size;
	public:
		Array();
		~Array();
		Array(const Array& src);
		Array(unsigned int n);
		Array& operator=(const Array& src);
		T& operator[](unsigned int index);
		unsigned int size() const;
};

template <typename T>
Array<T>::Array()
{
	_tab = NULL;
	_size = 0;
}
template <typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_tab = new T[n]();//() force a initialiser chaque case avc valeur par defaut genre 0 pr un int
	//et faire pointer tab sur l'allocation
}
template <typename T>
Array<T>::~Array()
{
	delete[] _tab;
}

template <typename T>
Array<T>::Array(const Array& src)//constructeur de copie
{
	_size = src._size;
	_tab = new T[_size]();//nv tab en memoire
	for (unsigned int i = 0; i < _size; i++)
		_tab[i] = src._tab[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& src)
{
	if (this != &src)//on verif quon essaie pas de se copier soi mm (tab = tab)
	{
		delete[] _tab;
		_size = src._size;
		_tab = new T[_size]();
		for (unsigned int i = 0; i < _size; i++)
			_tab[i] = src._tab[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::exception();
	return _tab[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}
