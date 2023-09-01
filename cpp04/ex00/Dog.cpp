/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:44:55 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/01 23:35:41 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(std::string newType)
{
    std::cout << "Dog Constructor Called" << std::endl;
    this->type = newType;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    *this = obj;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound()const
{
    std::cout << "Bark Bark Bark..." << std::endl;
}
