/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 00:38:36 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/27 01:27:55 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default constructor called" << std::endl;
}

AForm    *Intern::makeForm(const std::string formName, const std::string formTarget)
{
    int i = 0;
    std::string levels[] = { "PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    
    while (i < 4 && levels[i].compare(formName))
        i++;

    switch (i)
    {
        case 0:
            AForm   *form = new PresidentialPardonForm(formTarget);
            std::cout << "Intern creates " << formName << "." << std::endl;
            return(form);
        case 1:
            AForm   *form = new RobotomyRequestForm(formTarget);
            std::cout << "Intern creates " << formName << "." << std::endl;
            return(form);
        case 2:
            AForm   *form = new ShrubberyCreationForm(formTarget);
            std::cout << "Intern creates " << formName << "." << std::endl;
            return(form);
        default:
            std::cout << "Error, Wrong Form Target" << std::endl;
            break;
    }
    return(NULL);
}

Intern::Intern(const Intern &obj)
{
   std::cout << "Intern Copy constructor Called " << std::endl;
   *this = obj;
}

Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Intern Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        (void)other;
    }
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}