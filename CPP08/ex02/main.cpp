/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 02:49:08 by abensaid          #+#    #+#             */
/*   Updated: 2026/07/07 05:04:31 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);//test pr voir que 17 saffiche avant 5
std::cout << mstack.top() << std::endl;
mstack.pop();//supp 17
std::cout << mstack.size() << std::endl;//affiche la taille = 1
mstack.push(3);
mstack.push(5);
mstack.push(737);
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;//print 1 by 1 in order
++it;
}

std::stack<int> s(mstack);//copy constructor test
std::cout << "\n--- TEST STD::LIST ---" << std::endl;
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << mlist.back() << std::endl; // back remplace top
	mlist.pop_back(); // pop_back remplace pop
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator itL = mlist.begin();
	std::list<int>::iterator iteL = mlist.end();
	++itL;
	--itL;
	while (itL != iteL)
	{
		std::cout << *itL << std::endl;
		++itL;
	}
	std::list<int> sList(mlist);
	return 0;
}