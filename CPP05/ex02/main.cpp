/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensaid <abensaid@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 03:25:05 by abensaid          #+#    #+#             */
/*   Updated: 2026/05/16 07:17:52 by abensaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//int main(void)//main de test pr la class shrubbery
//{
//    try
//    {
//        Bureaucrat yassine("Yassine", 130);
//        Bureaucrat stagiaire("Stagiaire", 150);
//        ShrubberyCreationForm form("Jardin");

//        std::cout << yassine << std::endl;
//        std::cout << stagiaire << std::endl;
//        std::cout << form << std::endl;

//        std::cout << "\n--- Test 1 : Execution sans signature ---" << std::endl;
//        try
//        {
//            form.execute(yassine);
//        }
//        catch(const std::exception& e)
//        {
//            std::cerr << e.what() << '\n';
//        }

//        std::cout << "\n--- Signature du formulaire ---" << std::endl;
//        yassine.signForm(form);
//        std::cout << form << std::endl;

//        std::cout << "\n--- Test 2 : Execution avec grade trop bas ---" << std::endl;
//        try
//        {
//            form.execute(stagiaire);
//        }
//        catch(const std::exception& e)
//        {
//            std::cerr << e.what() << '\n';
//        }

//        std::cout << "\n--- Test 3 : Execution reussie ---" << std::endl;
//        try
//        {
//            form.execute(yassine);
//            std::cout << "Le fichier a ete cree avec succes !" << std::endl;
//        }
//        catch(const std::exception& e)
//        {
//            std::cerr << e.what() << '\n';
//        }
//    }
//    catch (std::exception &e)
//    {
//        std::cerr << e.what() << std::endl;
//    }
//    return 0;
//}

//int main(void)//main de test pr robotomyrequest
//{
//    srand(time(NULL));//srand pr seedrandom, permet de changer la seed en fonction du temps sur l'ordi(time(NULL)) pr garantir le hasard a chaque exec

//    try
//    {
//        Bureaucrat yassine("Yassine", 40);
//        Bureaucrat stagiaire("Stagiaire", 150);
//        RobotomyRequestForm r2d2("R2D2");

//        std::cout << yassine << '\n';
//        std::cout << stagiaire << '\n';
//        std::cout << r2d2 << '\n';

//        try
//        {
//            r2d2.execute(yassine);
//        }
//        catch(const std::exception& e)
//        {
//            std::cerr << e.what() << '\n';
//        }

//        yassine.signForm(r2d2);
//        std::cout << r2d2 << '\n';

//        try
//        {
//            r2d2.execute(stagiaire);
//        }
//        catch(const std::exception& e)
//        {
//            std::cerr << e.what() << '\n';
//        }

//        try
//        {
//            r2d2.execute(yassine);
//            r2d2.execute(yassine);
//            r2d2.execute(yassine);
//            r2d2.execute(yassine);
//        }
//        catch(const std::exception& e)
//        {
//            std::cerr << e.what() << '\n';
//        }
//    }
//    catch (std::exception &e)
//    {
//        std::cerr << e.what() << '\n';
//    }

//    return 0;
//}

int main(void)
{
    try
    {
        Bureaucrat bilal("Bilal", 5);
        Bureaucrat yassine("Yassine", 20);
        Bureaucrat stagiaire("Stagiaire", 150);
        PresidentialPardonForm form("Arthur Andreo");

        std::cout << bilal << '\n';
        std::cout << yassine << '\n';
        std::cout << stagiaire << '\n';
        std::cout << form << '\n';

        stagiaire.executeForm(form);

        yassine.signForm(form);
        std::cout << form << '\n';

        yassine.executeForm(form);

        bilal.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}