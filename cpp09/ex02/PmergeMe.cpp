/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:35:15 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 13:46:52 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    // std::cout << "PmergeMe Default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
//    std::cout << "PmergeMe Copy constructor Called " << std::endl;
   *this = obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    // std::cout << "PmergeMe Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        (void)other;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{
    // std::cout << "PmergeMe Destructor called" << std::endl;
}

int   checkWhiteSpace(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if(std::isspace(str[i]) == 1)
            return(1);
    return(0);
}

int   checkDigit(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if(!std::isdigit(str[i]))
            return(1);
    return(0);
}

int     PmergeMe::parseInput(char **s)
{
    int     i = 0;
    std::string str;

    while (s[++i])
    {
        str = s[i];
        std::cout << "|" << str << "|" << std::endl;

        if(str.length() == 0 || checkWhiteSpace(str) || checkDigit(str))
            return(1);
        
    }
        
    return(0);
}
