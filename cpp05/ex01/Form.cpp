/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:55:21 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 14:14:31 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), sign(false), gradeSigned(150), gradeExec(150)
{
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const std::string Name, bool Signed, const int gS, const int gE) : name(Name), sign(Signed), gradeSigned(gS), gradeExec(gE) 
{
    std::cout << "Form " << this->name << " Parametrised constructor called" << std::endl;
    if (this->gradeSigned < 1 || this->gradeExec < 1)
        throw GradeTooHighException();
    else if(this->gradeSigned > 150 || this->gradeExec > 150)
        throw GradeTooLowException();
    // if(this->sign == true)// delete later
    //     std::cout <<"fuck" << std::endl;
}

Form::Form(const Form &obj) : name(obj.name), gradeSigned(obj.gradeSigned), gradeExec(obj.gradeExec) 
{
   std::cout << "Form Copy constructor Called " << std::endl;
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Form Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        // this->name = other.name;
        // this->gradeExec = other.gradeExec;
    }
    return *this;
}

Form::~Form()
{
    std::cout << "Form " << this->name << " Destructor called" << std::endl;
}

//-------------------Getters-----------------//


//-------------------Grade Modifiers-----------------//



//--------------------overload of the insertion («) operator-------------//

std::ostream &operator<<(std::ostream &o, const Form&obj)
{
    // o << obj.getName() << ", Form grade " << obj.getGrade();
    return o;
}

