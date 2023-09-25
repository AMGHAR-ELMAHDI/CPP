/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:49 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 15:08:13 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   name;
        bool                isSigned;
        const int           gradeSigned;
        const int           gradeExec;

    public:
        Form();
        Form(const std::string Name, const int gS, const int gE);
        Form(const Form &obj);
        Form &operator=(const Form &other);
        void    beSigned(const Bureaucrat &b);
        ~Form();
    
        //-------------------Getters-----------------//
        const std::string getName(void)const;
        bool getIsSigned(void)const;
        int getGradeSigned(void)const;
        int getGradeExec(void)const;

        //-------------------Exceptions-----------------//
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade too High Exception called";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade too Low Exception called";
                }
        };
};

//--------------------overload of the insertion («) operator-------------//
std::ostream &operator<<(std::ostream &o, const Form &obj);

#endif