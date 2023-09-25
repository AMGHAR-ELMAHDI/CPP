/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:32:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 13:49:47 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string Name, int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();
        
        //-------------------Getters-----------------//
        int getGrade(void)const;
        const std::string getName(void)const;
        
        //-------------------Grade Modifiers-----------------//
        void    incrementGrade();
        void    decrementGrade();

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
std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);

#endif