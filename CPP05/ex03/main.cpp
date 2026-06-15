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
#include "Intern.hpp"

int main(void)
{
    srand(time(NULL));
    Intern someRandomIntern;
    Bureaucrat boss("Bilal", 1);
    AForm* rrf;

    std::cout << "\n--- TEST 1 : VALID FORM ---" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    
    if (rrf != NULL)
    {
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        delete rrf;
    }

    std::cout << "\n--- TEST 2 : INVALID FORM ---" << std::endl;
    rrf = someRandomIntern.makeForm("vacation request", "Employee");
    
    if (rrf != NULL)
    {
        delete rrf;
    }

    return 0;
}