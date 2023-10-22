/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:35:15 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 13:46:52 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    // std::cout << "RPN Default constructor called" << std::endl;
}

RPN::RPN(const RPN &obj)
{
//    std::cout << "RPN Copy constructor Called " << std::endl;
   *this = obj;
}

RPN &RPN::operator=(const RPN &other)
{
    // std::cout << "RPN Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
    }
    return *this;
}

RPN::~RPN()
{
    // std::cout << "RPN Destructor called" << std::endl;
}
