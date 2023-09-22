/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:44:55 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/22 19:11:58 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    this->type = "Dog";
    this->br = new (std::nothrow)Brain();
}

Dog::Dog(std::string newType)
{
    std::cout << "Dog Constructor Called" << std::endl;
    this->type = newType;
    this->br = new (std::nothrow)Brain();
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    *this = obj;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        this->type = other.type;
        if(this->br)
            delete this->br;
        this->br = new (std::nothrow)Brain();
        for (size_t i = 0; i < 100; i++)
        {
            this->br->setIdeas(other.br->getIdeas(i), i);
        }
    }
    return *this;
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
