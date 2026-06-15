#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& src)
{
    (void)src;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern& src)
{
    (void)src;
    return *this;
}

AForm* Intern::makeShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::makePresidential(std::string target)
{
    return new PresidentialPardonForm(target);
}
AForm* Intern::makeForm(std::string formName, std::string target)
{
    std::string formNames[] = 
    {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };//AForm = type de retour des fonctions, funcs = tab de fonctions * car il va contenir des pointeurs et std::string pr target
    AForm* (Intern::*funcs[])(std::string) =//tab de pointeurs sur fonctions membres
    {
        &Intern::makeShrubbery,//adresse memoire pr montrer au compilateur quon veut juste creer un pointeur et pas lexecuter
        &Intern::makeRobotomy,
        &Intern::makePresidential
    };
    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*funcs[i])(target);
        }
    }
    std::cout << "Error: Intern cannot create '" << formName << "' because this form doesn't exist." << std::endl;
    return NULL;
}
