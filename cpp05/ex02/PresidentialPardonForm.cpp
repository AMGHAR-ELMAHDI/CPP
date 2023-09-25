/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:44:22 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 19:57:00 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : target(target)
{
    std::cout << "PresidentialPardonForm Parametrised constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

int PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
    if(this->getGradeSigned() <= 25 && this->getGradeExec() <= 5)
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
        std::cout << this->target << ",has been pardoned by Zaphod Beeblebrox" << std::endl;
        return(1);
    }
    return(0);
}