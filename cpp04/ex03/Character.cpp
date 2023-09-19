/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 04:38:33 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/19 04:50:07 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Character Default Constructor Called" << std::endl;
    this->name = "Character";
    for (size_t i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string const &Name)
{
    std::cout << "Character Constructor Called" << std::endl;
    this->name = Name;
    for (size_t i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::~Character()
{
    std::cout << "Character Destructor Called" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if(this->inventory[i])
            delete this->inventory[i];
    }
}

std::string const& Character::getName() const
{
    return(this->name);
}

void Character::setName(const std::string newStr)
{
    this->name = newStr;
};

Character::Character(const Character &obj)
{
    std::cout << "Character Copy constructor Called " << std::endl;
    *this = obj;
};

Character &Character::operator=(const Character &other)
{
    std::cout << "Character Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        this->name = other.name;
        for (size_t i = 0; i < 4; i++)
            this->inventory[i] = other.inventory[i];
    }
    return *this;
};

