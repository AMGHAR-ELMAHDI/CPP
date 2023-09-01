/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:44:55 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/01 02:18:50 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){}

Animal::Animal(std::string newType)
{
    std::cout << "Animal Default Constructor Called" << std::endl; 
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = obj
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl; 
}

std::string Animal::getType()
{
    return(this->type);
}

void    Animal::setType(std::string newType)
{
    this->type = newType;
}