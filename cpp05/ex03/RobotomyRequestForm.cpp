/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:44:38 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/28 16:23:20 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robot", 72, 45)
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string targeT) : AForm(targeT, 72, 45), target(targeT)
{
    std::cout << "RobotomyRequestForm Parametrised constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
{
   std::cout << "RobotomyRequestForm Copy constructor Called " << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "RobotomyRequestForm Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        (void)other;
    }
    return *this;
}

int    RobotomyRequestForm::execute(Bureaucrat const & executor)const
{
    if(executor.getGrade() <= this->getGradeSigned() && this->getIsSigned() == true)
    {
        std::cout << "Background drilling noises" << std::endl;
        srand(time(NULL));
        
        if((rand()%100) % 2 == 0)
            std::cout << target << ",has been robotomized successfully" << std::endl;
        else
            std::cout << target << ",robotomy failed." << std::endl;
        return(1);
    }
    else
        throw CantExecute();
    return(0);
}


RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}
