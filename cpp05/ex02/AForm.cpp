/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:55:21 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 15:39:04 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), isSigned(false), gradeSigned(150), gradeExec(150)
{
    std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(const std::string Name, const int gS, const int gE) : name(Name), isSigned(false), gradeSigned(gS), gradeExec(gE) 
{
    std::cout << "AForm " << this->name << " Parametrised constructor called" << std::endl;
    if (this->gradeSigned < 1 || this->gradeExec < 1)
        throw GradeTooHighException();
    else if(this->gradeSigned > 150 || this->gradeExec > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &obj) : name(obj.name), isSigned(obj.isSigned), gradeSigned(obj.gradeSigned), gradeExec(obj.gradeExec) 
{
   std::cout << "AForm Copy constructor Called " << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "AForm Copy assignement opperator called " << std::endl;
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return *this;
}

AForm::~AForm()
{
    std::cout << "AForm " << this->name << " Destructor called" << std::endl;
}

//-------------------Getters-----------------//

std::string AForm::getName(void)const
{
    return(this->name);
}

bool AForm::getIsSigned(void)const
{
    return(this->isSigned);
}

int AForm::getGradeSigned(void)const
{
    return(this->gradeSigned);
}

int AForm::getGradeExec(void)const
{
    return(this->gradeExec);
}

//--------------------overload of the insertion («) operator-------------//

std::ostream &operator<<(std::ostream &o, const AForm&obj)
{
    o << "AForm " << obj.getName() << ", its Signed status is: "<< obj.getIsSigned()
    << ", its required sign grade is: " << obj.getGradeSigned() <<
    ", and its required execution grade is: " << obj.getGradeExec() << std::endl;
    return o;
}

void    AForm::beSigned(const Bureaucrat &b)
{
    if(b.getGrade() <= this->getGradeSigned())
        this->isSigned = true;
    else
        throw GradeTooLowException();
}


void    AForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() <= this->getGradeExec())
    {
        this.
    }
}
