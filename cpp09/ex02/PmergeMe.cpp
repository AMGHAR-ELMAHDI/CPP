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

void   PmergeMe::printvecMainChain(std::string print)
{
    std::cout << print;
    for (std::vector<int>::iterator it = this->vecMainChain.begin(); it != this->vecMainChain.end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
}

void   PmergeMe::printvecPend(std::string print)
{
    std::cout << print;
    for (std::vector<int>::iterator it = this->vecPend.begin(); it != this->vecPend.end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
}

void   PmergeMe::printVectorDouble(std::string print)
{
    std::cout << print << std::endl;
    for (iterDouble = vectorDouble.begin(); iterDouble != vectorDouble.end(); iterDouble++)
        std::cout << "|" << std::setw(5) << iterDouble->first << "|" << std::setw(5) << iterDouble->second << "|" << std::endl;
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
        this->vecMainChain.push_back(outInt);
    }
    if (this->vecMainChain.empty())
        return (1);
    return(this->printvecMainChain("Before: "), this->sortInput(), 0);
}

int    PmergeMe::sortInput()
{
    if (this->vecMainChain.size() % 2 != 0)
    {
        this->struggler = vecMainChain.back();
        vecMainChain.pop_back();
    }

    for (iterSingle = vecMainChain.begin(); iterSingle != vecMainChain.end(); iterSingle += 2)
        vectorDouble.push_back(std::make_pair(*iterSingle, *(iterSingle + 1)));

    for (iterDouble = vectorDouble.begin(); iterDouble != vectorDouble.end(); iterDouble++)
        if(iterDouble->first < iterDouble->second)
            std::swap(iterDouble->first, iterDouble->second);

    std::sort(vectorDouble.begin(), vectorDouble.end());
    vecMainChain.clear();
    for (iterDouble = vectorDouble.begin(); iterDouble != vectorDouble.end(); iterDouble++)
    {
        if(iterDouble == vectorDouble.begin())
            vecMainChain.push_back(iterDouble->second);
        vecMainChain.push_back(iterDouble->first);
        vecPend.push_back(iterDouble->second);
    }

    printVectorDouble("After in Double: ");
    std::cout << "-----------------------------------------------------" << std::endl;
    printvecMainChain("Main Chain: ");
    std::cout << "-----------------------------------------------------" << std::endl;
    printvecPend("Pend: ");
    std::cout << "-----------------------------------------------------" << std::endl;

    std::cout << "Jacobs Numbers: ";
    sortUsingJacobsthalNumbers();
    std::cout << "-----------------------------------------------------" << std::endl;
    return(0);
}


void    PmergeMe::sortUsingJacobsthalNumbers()
{
    generateJacobsthalNumbers(this->vecPend.size());
    for (std::vector<int>::iterator it = jacobNumber.begin(); it != jacobNumber.end(); it++)
        std::cout << *it << " ";
    std::cout <<  std::endl;
}

int PmergeMe::jacobsthal(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

void PmergeMe::generateJacobsthalNumbers(int limit)
{
  for (int i = 0; i <= limit; i++)
    this->jacobNumber.push_back(jacobsthal(i));
}
