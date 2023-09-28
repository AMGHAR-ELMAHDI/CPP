/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/28 16:32:15 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "/-------------------------------------------------/" << std::endl;
	try
	{
		ShrubberyCreationForm dsw("Cheesy");
		Bureaucrat yyy("dd", 1);
		dsw.beSigned(yyy);
		yyy.executeForm(dsw);
	}
	
	catch(std::exception &e)	
	{	
		std::cerr << e.what() << '\n';
	}
	return(0);
}
