/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:44:55 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/01 23:39:38 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor Called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(std::string newType)
{
    std::cout << "WrongCat Constructor Called" << std::endl;
    this->type = newType;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
    *this = obj;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound()const
{
    std::cout << "Meow Meow Meow..." << std::endl;
}
