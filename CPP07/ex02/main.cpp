/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 21:02:08 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/02 01:02:20 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
//int main(int, char**)
//{
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];//tab miroir pr comparer et verifier que le tableau Array se comporte comme il faut
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();//tire un nbr au hasard
//        numbers[i] = value;//linsere dans le tableau array
//        mirror[i] = value;//et le tab mirroir pr verif que loperateur[] marche
//    }
//    //SCOPE
//    {
//		Array<int> tmp = numbers;//test operateur assignations
//        Array<int> test(tmp);//test constructeur de copie
//    }//scope sert a delete automatiquement ce qui est fait dedans

//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        if (mirror[i] != numbers[i])//verif que le tableau original na pas de soucis
//        {
//            std::cerr << "didn't save the same value!!" << std::endl;
//            return 1;
//        }
//    }
//    try
//    {
//        numbers[-2] = 0;//test de valeur negative sur tableau
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    try
//    {
//        numbers[MAX_VAL] = 0;//test d'acces a une case trop haute
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }

//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        numbers[i] = rand();
//    }
//    delete [] mirror;//
//    return 0;
//}

int	main()
{
	Array<int> tab(5);
	for (unsigned int i = 0; i < tab.size(); i++)
	{
		tab[i] = i * 10;//remplissage 0, 10, 20, 30...
	}
	std::cout << "tab size : " << tab.size() << std::endl;
	for (unsigned int i = 0; i < tab.size(); i++)
	{
		std::cout << "Case [" << i << "] = " << tab[i] << std::endl;
	}
	return 0;
}