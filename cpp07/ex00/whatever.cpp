/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:25:33 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/09 16:02:19 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

whatever::whatever()
{
    std::cout << "whatever Default constructor called" << std::endl;
}


whatever::whatever(const whatever &obj)
{
   std::cout << "whatever Copy constructor Called " << std::endl;
   *this = obj;
}

whatever &whatever::operator=(const whatever &other)
{
    std::cout << "whatever Copy assignement opperator called " << std::endl; 
    (void)other;
    return *this;
}

whatever::~whatever()
{
    std::cout << "whatever Destructor called" << std::endl;
}

