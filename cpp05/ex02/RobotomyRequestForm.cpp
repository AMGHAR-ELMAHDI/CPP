/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:44:38 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 17:48:53 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
{
    std::cout << "RobotomyRequestForm Parametrised constructor called" << std::endl;
    if(this->getGradeSigned() <= 72 && this->getGradeExec() <= 45)
    {
        std::cout << "Background drilling noises" << std::endl;
        std::cout << target << ",has been robotomized successfully 50% of the time" << std::endl;
        return;
    }
    std::cout << target << ",robotomy failed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void    RobotomyRequestForm::beSigned(const Bureaucrat &b)
{
//     if(b.getGrade() <= this->getGradeSigned())
//         this->isSigned = true;
//     else
//         throw GradeTooLowException();
    std::cout << b.getGrade() << std::endl;
}
