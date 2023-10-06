/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:17:06 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/06 22:25:59 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{
    std::cout << "C Default constructor called" << std::endl;
}

C::C(const C &obj)
{
   std::cout << "C Copy constructor Called " << std::endl;
   *this = obj;
}

C &C::operator=(const C &other)
{
    std::cout << "C Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        (void)other;
    }
    return *this;
}

C::~C()
{
    std::cout << "C Destructor called" << std::endl;
}
