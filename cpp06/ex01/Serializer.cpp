/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:25:33 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/02 22:26:01 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &obj)
{
   std::cout << "Serializer Copy constructor Called " << std::endl;
   *this = obj;
}

Serializer &Serializer::operator=(const Serializer &other)
{
    std::cout << "Serializer Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        (void)other;
    }
    return *this;
}

Serializer::~Serializer()
{
    std::cout << "Serializer Destructor called" << std::endl;
}