/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:44:55 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/22 19:10:01 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    this->type = "Cat";
    this->br = new (std::nothrow) Brain();
}

Cat::Cat(std::string newType)
{
    std::cout << "Cat Constructor Called" << std::endl;
    this->type = newType;
    this->br = new (std::nothrow) Brain();
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Copy assignement opperator called " << std::endl; 
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

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
    if(this->br)
        delete this->br;
}

void Cat::makeSound()const
{
    std::cout << "Meow Meow Meow..." << std::endl;
}
