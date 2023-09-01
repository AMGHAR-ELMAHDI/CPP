/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:44:55 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/01 23:35:36 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(std::string newType)
{
    std::cout << "Cat Constructor Called" << std::endl;
    this->type = newType;
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    *this = obj;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound()const
{
    std::cout << "Meow Meow Meow..." << std::endl;
}
