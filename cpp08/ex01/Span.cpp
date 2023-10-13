/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:30:34 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/13 20:32:48 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    std::cout << "Span Default constructor called" << std::endl;
}


Span::Span(const Span &obj)
{
   std::cout << "Span Copy constructor Called " << std::endl;
   *this = obj;
}

Span &Span::operator=(const Span &other)
{
    std::cout << "Span Copy assignement opperator called " << std::endl; 
    (void)other;
    return *this;
}

Span::~Span()
{
    std::cout << "Span Destructor called" << std::endl;
}

