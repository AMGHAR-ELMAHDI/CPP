/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:44:55 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/01 23:35:20 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor Called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(std::string newType)
{
    std::cout << "Animal Constructor Called" << std::endl;
    this->type = newType;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = obj;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

std::string Animal::getType(void)const
{
    return(this->type);
}

void    Animal::setType(std::string newType)
{
    this->type = newType;
}

void Animal::makeSound(void)const
{
    std::cout << "Random Animal Sounds" << std::endl;
}
