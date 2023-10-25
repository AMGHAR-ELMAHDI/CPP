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

void   PmergeMe::printVectorSingle(std::string print)
{
    std::cout << print;
    for (std::vector<int>::iterator it = this->vectorSingle.begin(); it != this->vectorSingle.end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
}

int     PmergeMe::parseInput(char **s)
{
    int     i = 0, outInt;
    std::string str;

    while (s[++i])
    {
        str = s[i];
        if(str.length() == 0 || checkWhiteSpace(str) || checkDigit(str))
            return(1);
        std::stringstream stream(str);
        if(!(stream >> outInt))
            return(1);
        outInt  = std::stoi(str);
        this->vectorSingle.push_back(outInt);
    }
    if (this->vectorSingle.empty())
        return (1);
    return(this->printVectorSingle("Before: "), this->sortInput(), 0);
}

int    PmergeMe::sortInput()
{
    if (this->vectorSingle.size() % 2 != 0)
    {
        this->struggler = vectorSingle.back();
        vectorSingle.pop_back();
    }

    for (iterSingle = vectorSingle.begin(); iterSingle != vectorSingle.end(); iterSingle += 2)
        vectorDouble.push_back(std::make_pair(*iterSingle, *(iterSingle + 1)));

    for (iterDouble = vectorDouble.begin(); iterDouble != vectorDouble.end(); iterDouble++)
        std::cout << "|" << iterDouble->first << "|" << iterDouble->second << "|" << std::endl;

    
    return(0);
}
