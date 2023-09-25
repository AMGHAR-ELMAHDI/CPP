/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 13:48:26 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat ds1("Cheesy1", 150);
    Bureaucrat ds2("Cheesy2", 1);
    try
    {
        Bureaucrat ds3("Cheesy3", 0);
    }

    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        ds1.decrementGrade();
    }
    
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        ds2.incrementGrade();
    }

    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << ds1 << std::endl;
    std::cout << ds2 << std::endl;

    return(0);
}
