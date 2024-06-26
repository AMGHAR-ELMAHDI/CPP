/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 00:38:36 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/27 19:31:50 by eamghar          ###   ########.fr       */
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
    std::string levels[] = { "presidential request", "robotomy request", "shrubbery request"};
    
    while (i < 4 && levels[i].compare(formName))
        i++;

    AForm   *form1 = new PresidentialPardonForm(formTarget);
    AForm   *form2 = new RobotomyRequestForm(formTarget);
    AForm   *form3 = new ShrubberyCreationForm(formTarget);
    switch (i)
    {
        case 0:
            std::cout << "Intern creates " << formName << "." << std::endl;
            delete form2;
            delete form3;
            return(form1);
        case 1:
            std::cout << "Intern creates " << formName << "." << std::endl;
            delete form1;
            delete form3;
            return(form2);
        case 2:
            std::cout << "Intern creates " << formName << "." << std::endl;
            delete form1;
            delete form2;
            return(form3);
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