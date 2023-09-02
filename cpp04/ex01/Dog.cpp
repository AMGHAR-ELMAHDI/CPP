/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:44:55 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/02 05:14:33 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    this->type = "Dog";
    this->br = new Brain();
}

Dog::Dog(std::string newType)
{
    std::cout << "Dog Constructor Called" << std::endl;
    this->type = newType;
    this->br = new Brain();
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    *this = obj;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
    delete this->br;
}

void Dog::makeSound()const
{
    std::cout << "Bark Bark Bark..." << std::endl;
}
