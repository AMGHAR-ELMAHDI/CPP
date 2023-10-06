/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:01:14 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/06 22:24:57 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
    std::cout << "A Default constructor called" << std::endl;
}

A::A(const A &obj)
{
   std::cout << "A Copy constructor Called " << std::endl;
   *this = obj;
}

A &A::operator=(const A &other)
{
    std::cout << "A Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        (void)other;
    }
    return *this;
}

A::~A()
{
    std::cout << "A Destructor called" << std::endl;
}
