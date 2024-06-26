/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:20:35 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/19 04:24:04 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice Default Constructor Called" << std::endl;
    this->type = "ice";
}

Ice::Ice(std::string const &type)
{
    std::cout << "Ice Constructor Called" << std::endl;
    this->type = type;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor Called" << std::endl;
}

std::string const& Ice::getType() const
{
    return(this->type);
}

void Ice::setType(const std::string newStr)
{
    this->type = newStr;
};

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *"<< std::endl;
};

Ice::Ice(const Ice &obj)
{
    std::cout << "Ice Copy constructor Called " << std::endl;
    *this = obj;
};

Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
};

