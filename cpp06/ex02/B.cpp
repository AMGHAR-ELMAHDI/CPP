/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:16:34 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/06 22:25:46 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
    std::cout << "B Default constructor called" << std::endl;
}

B::B(const B &obj)
{
   std::cout << "B Copy constructor Called " << std::endl;
   *this = obj;
}

B &B::operator=(const B &other)
{
    std::cout << "B Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        (void)other;
    }
    return *this;
}

B::~B()
{
    std::cout << "B Destructor called" << std::endl;
}
