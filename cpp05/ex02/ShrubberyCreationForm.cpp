/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:48:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 19:56:32 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : target(target)
{
    std::cout << "ShrubberyCreationForm Parametrised constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

int   ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{
    if(this->getGradeSigned() <= 145 && this->getGradeExec() <= 137)
    {
        try
        {
            this->beSigned(executor);
        }
        catch(AForm::GradeTooLowException &e)
        {
            std::cerr << e.what() << '\n';
            return(0);
        }
    }
    if(this->getIsSigned() == true)
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
    return(0);
}