/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:44:22 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 17:53:13 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
{
    std::cout << "PresidentialPardonForm Parametrised constructor called" << std::endl;
    if(this->getGradeSigned() <= 25 && this->getGradeExec() <= 5)
    {
        std::cout << target << ",has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void    PresidentialPardonForm::beSigned(const Bureaucrat &b)
{
//     if(b.getGrade() <= this->getGradeSigned())
//         this->isSigned = true;
//     else
//         throw GradeTooLowException();
    std::cout << b.getGrade() << std::endl;
}
