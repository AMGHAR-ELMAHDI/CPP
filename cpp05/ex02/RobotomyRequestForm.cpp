/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:44:38 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 19:56:43 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : target(target)
{
    std::cout << "RobotomyRequestForm Parametrised constructor called" << std::endl;
}

int    RobotomyRequestForm::execute(Bureaucrat const & executor)const
{
    if(this->getGradeSigned() <= 72 && this->getGradeExec() <= 45)
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
        std::cout << "Background drilling noises" << std::endl;
        std::cout << target << ",has been robotomized successfully 50% of the time" << std::endl;
        return(1);
    }
    std::cout << target << ",robotomy failed." << std::endl;
    return(0);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}
