/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:48:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 17:50:01 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
{
    std::cout << "ShrubberyCreationForm Parametrised constructor called" << std::endl;
    if(this->getGradeSigned() <= 145 && this->getGradeExec() <= 137)
    {
        std::string line = target;
        std::ofstream file(line + "_shrubbery");
        if(!file.is_open())
        {
            std::cout << "Error fd out" << std::endl;
            return;
        }
        line = "       ^       \n" ;
        file << line;
        line = "      ^^^       \n" ;
        file << line;
        line = "     ^^^^^       \n" ;
        file << line;
        line = "    ^^^^^^^       \n" ;
        file << line;
        line = "   ^^^^^^^^^       \n" ;
        file << line;
        line = "  ^^^^^^^^^^^       \n" ;
        file << line;
        line = " ^^^^^^^^^^^^^       \n" ;
        file << line;
        line = "       |       \n" ;
        file << line;
        line = "       |       \n" ;
        file << line;
        line = "       |       \n" ;
        file << line;
        line = "       |       \n" ;
        file << line;
        line = "       |       \n" ;
        file << line;
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void    ShrubberyCreationForm::beSigned(const Bureaucrat &b)
{
//     if(b.getGrade() <= this->getGradeSigned())
//         this->isSigned = true;
//     else
//         throw GradeTooLowException();
    std::cout << b.getGrade() << std::endl;
}
