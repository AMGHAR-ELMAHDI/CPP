/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:48:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/28 16:23:37 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137), target("Shrubbery")
{
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string targeT) : AForm(targeT, 145, 137) ,target(targeT)
{
    std::cout << "ShrubberyCreationForm Parametrised constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{
   std::cout << "ShrubberyCreationForm Copy constructor Called " << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "ShrubberyCreationForm Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        (void)other;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

int   ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{
    if(executor.getGrade() <= this->getGradeSigned() && this->getIsSigned() == true)
    {
        std::ofstream file(this->target + "_shrubbery");
        if(!file.is_open())
        {
            std::cout << "Error fd" << std::endl;
            return(0);
        }
        file << "       ^       \n" ;
        file << "      ^^^       \n" ;
        file << "     ^^^^^       \n" ;
        file << "    ^^^^^^^       \n" ;
        file << "   ^^^^^^^^^       \n" ;
        file << "  ^^^^^^^^^^^       \n" ;
        file << " ^^^^^^^^^^^^^       \n" ;
        file << "       |       \n" ;
        file << "       |       \n" ;
        file << "       |       \n" ;
        file << "       |       \n" ;
        file << "       |       \n" ;
        file.close();
        return(1);
    }
    else
        throw CantExecute();
    return(0);
}
