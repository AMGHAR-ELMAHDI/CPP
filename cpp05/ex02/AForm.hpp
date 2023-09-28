/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:49 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/28 16:19:50 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string   name;
        bool                isSigned;
        const int           gradeSigned;
        const int           gradeExec;

    public:
        AForm();
        AForm(const std::string Name, const int gS, const int gE);
        AForm(const AForm &obj);
        AForm &operator=(const AForm &other);
        void    beSigned(const Bureaucrat &b);
        virtual ~AForm();
    
        //-------------------Getters-----------------//
        std::string getName(void)const;
        bool        getIsSigned(void)const;
        int         getGradeSigned(void)const;
        int         getGradeExec(void)const;

        //-------------------Exceptions-----------------//
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class CantExecute : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        //--------------------execute--------------------//
        virtual int    execute(Bureaucrat const & executor) const = 0;
};

//--------------------overload of the insertion («) operator-------------//
std::ostream &operator<<(std::ostream &o, const AForm &obj);

#endif