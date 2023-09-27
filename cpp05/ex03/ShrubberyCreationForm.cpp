/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:48:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/26 20:07:30 by eamghar          ###   ########.fr       */
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
    
    try
    {
        throw CantExecute();
    }
    
    catch(AForm::CantExecute &e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0);
}