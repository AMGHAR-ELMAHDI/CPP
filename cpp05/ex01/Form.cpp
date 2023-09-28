/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:55:21 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/28 16:16:02 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), gradeSigned(150), gradeExec(150)
{
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const std::string Name, const int gS, const int gE) : name(Name), isSigned(false), gradeSigned(gS), gradeExec(gE) 
{
    std::cout << "Form " << this->name << " Parametrised constructor called" << std::endl;
    if (this->gradeSigned < 1 || this->gradeExec < 1)
        throw GradeTooHighException();
    else if(this->gradeSigned > 150 || this->gradeExec > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &obj) : name(obj.name), isSigned(obj.isSigned), gradeSigned(obj.gradeSigned), gradeExec(obj.gradeExec) 
{
   std::cout << "Form Copy constructor Called " << std::endl;
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Form Copy assignement opperator called " << std::endl;
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return *this;
}

Form::~Form()
{
    std::cout << "Form " << this->name << " Destructor called" << std::endl;
}

//-------------------Getters-----------------//

std::string Form::getName(void)const
{
    return(this->name);
}

bool Form::getIsSigned(void)const
{
    return(this->isSigned);
}

int Form::getGradeSigned(void)const
{
    return(this->gradeSigned);
}

int Form::getGradeExec(void)const
{
    return(this->gradeExec);
}

//--------------------overload of the insertion («) operator-------------//

std::ostream &operator<<(std::ostream &o, const Form&obj)
{
    o << "Form " << obj.getName() << ", its Signed status is: "<< obj.getIsSigned()
    << ", its required sign grade is: " << obj.getGradeSigned() <<
    ", and its required execution grade is: " << obj.getGradeExec() << std::endl;
    return o;
}

void    Form::beSigned(const Bureaucrat &b)
{
    if(b.getGrade() <= this->getGradeSigned())
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too High Exception called";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too Low Exception called";
}