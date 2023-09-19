/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:20:35 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/19 04:21:53 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure Default Constructor Called" << std::endl;
    this->type = "cure";
}

Cure::Cure(std::string const &type)
{
    std::cout << "Cure Constructor Called" << std::endl;
    this->type = type;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor Called" << std::endl;
}

std::string const& Cure::getType() const
{
    return(this->type);
}

void Cure::setType(const std::string newStr)
{
    this->type = newStr;
};

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() << "'s wounds *"<< std::endl;
};

Cure::Cure(const Cure &obj)
{
    std::cout << "Cure Copy constructor Called " << std::endl;
    *this = obj;
};

Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Cure Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
};

