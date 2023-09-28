/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/28 16:14:46 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


int main()
{
	AForm*   rrf;
	try{
		Intern  someRandomIntern;
		Bureaucrat j("d", 150);
		rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
		rrf->beSigned(j);
		rrf->execute(j);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete rrf;
	return(0);
}
