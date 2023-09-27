/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:44:22 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/26 20:06:54 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential", 25, 5), target("Presidential")
{
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string targeT) : AForm(targeT, 25, 5), target(targeT)
{
    std::cout << "PresidentialPardonForm Parametrised constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj)
{
   std::cout << "PresidentialPardonForm Copy constructor Called " << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "PresidentialPardonForm Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        (void)other;
    }
    return *this;
}

int PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
    if(executor.getGrade() <= this->getGradeSigned() && this->getIsSigned() == true)
    {
        std::cout << this->target << ",has been pardoned by Zaphod Beeblebrox" << std::endl;
        return(1);
    }
    
    try
    {
        throw CantExecute();
    }
    
    catch(AForm::CantExecute &e)
    {
        std::cerr << e.what() << '\n';
        return(0);
    }
    return(0);
}