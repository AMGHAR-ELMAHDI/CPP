/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:35:15 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 15:37:55 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default") , grade(150)
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string Name, int grade) : name(Name), grade(grade)
{
    std::cout << "Bureaucrat " << this->name << " Parametrised constructor called" << std::endl;
    if (this->grade < 1)
        throw GradeTooHighException();
    else if(this->grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade)
{
   std::cout << "Bureaucrat Copy constructor Called " << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Bureaucrat Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        this->grade = other.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << this->name << " Destructor called" << std::endl;
}

//-------------------Getters-----------------//

int Bureaucrat::getGrade(void)const
{
    return(this->grade);
}

const std::string Bureaucrat::getName(void)const
{
    return(this->name);
}

//-------------------Grade Modifiers-----------------//

void    Bureaucrat::incrementGrade()
{
    if (this->grade == 1)
        throw GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (this->grade == 150)
        throw GradeTooLowException();
    this->grade++;
}

//--------------------overload of the insertion («) operator-------------//

std::ostream &operator<<(std::ostream &o, const Bureaucrat&obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return o;
}

void    Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << "bureaucrat " << this->name << ", signed " << f.getName() << std::endl;
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cout << "bureaucrat " << this->name << ",couldn’t sign " << f.getName()
        << ", because his grade: " << this->grade << " is lower than the form's: " << f.getGradeSigned() << std::endl;
        std::cout << e.what() << std::endl;
    }
}
