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

PmergeMe::PmergeMe() : checkStruggler(false)
{
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
   *this = obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
        (void)other;
    return *this;
}

PmergeMe::~PmergeMe()
{
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

void   PmergeMe::printJacobNumbers(std::string print)
{
    std::cout << print;
    for (std::vector<int>::iterator it = jacobNumber.begin(); it != jacobNumber.end(); it++)
            std::cout << *it << " ";
    std::cout <<  std::endl;
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
        outInt  = std::atoi(str.c_str());
        this->vecMainChain.push_back(outInt);
    }
    if (this->vecMainChain.empty())
        return (1);
    return(this->printvecMainChain("Before: "), this->sortInput(), 0);
}

int    PmergeMe::sortInput()
{
    //Remove struggler from Main Chain
    if (this->vecMainChain.size() % 2 != 0)
    {
        this->struggler = vecMainChain.back();
        checkStruggler = true;
        vecMainChain.pop_back();
    }

    //Fill Double Vector with pairs from Main chain
    for (iterSingle = vecMainChain.begin(); iterSingle != vecMainChain.end(); iterSingle += 2)
        vectorDouble.push_back(std::make_pair(*iterSingle, *(iterSingle + 1)));

    //Sort the Pairs so that the smaller number is always the second one
    for (iterDouble = vectorDouble.begin(); iterDouble != vectorDouble.end(); iterDouble++)
        if(iterDouble->first < iterDouble->second)
            std::swap(iterDouble->first, iterDouble->second);

    //Sort the Main chain inside the DoubleVec and fill the Main Chain Vec with the first numbers and Pend Vec with second numbers
    std::sort(vectorDouble.begin(), vectorDouble.end());
    vecMainChain.clear();
    for (iterDouble = vectorDouble.begin(); iterDouble != vectorDouble.end(); iterDouble++)
    {
        if(iterDouble == vectorDouble.begin())
            vecMainChain.push_back(iterDouble->second);
        vecMainChain.push_back(iterDouble->first);
        vecPend.push_back(iterDouble->second);
    }

    // printVectorDouble("After in Double: ");
    // std::cout << "-----------------------------------------------------" << std::endl;
    // printvecMainChain("Main Chain: ");
    // std::cout << "-----------------------------------------------------" << std::endl;
    // printvecPend("Pend: ");
    // std::cout << "-----------------------------------------------------" << std::endl;

    // std::cout << "Jacobs Numbers: ";
    sortUsingJacobsthalNumbers();

    // std::cout << "-----------------------------------------------------" << std::endl;
    printvecMainChain("After: ");
    // std::cout << "-----------------------------------------------------" << std::endl;
    return(0);
}

void    PmergeMe::sortUsingJacobsthalNumbers()
{
    generateJacobsthalNumbers(15);
    printJacobNumbers("Jacob Numbers: ");

    iterSingle = jacobNumber.begin();
    iterSingle += 3;

    //Generate Jackosthal combination numbers
    for (; iterSingle != jacobNumber.end(); iterSingle++)
    {
        int   num = (*iterSingle), numprev = *(iterSingle - 1);
        while (num != numprev)
            jacobCombination.push_back(num--);
    }

    //Using binary search to find the index where to insert the pend numbers
    for (std::vector<int>::iterator it = jacobCombination.begin(); it != jacobCombination.end(); it++)
    {
        int num = *it - 1;
        if(num < (int) vecPend.size())
        {
            iterSingle = binarySearch(vecMainChain, vecPend[num]) + vecMainChain.begin();
			vecMainChain.insert(iterSingle, vecPend[num]);
        }
    }
    //add the struggler
    if (checkStruggler == true)
    {
        int index = binarySearch(vecMainChain, struggler);
		vecMainChain.insert(index + vecMainChain.begin(), struggler);
    }
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
  for (int i = 0; i < limit; i++)
    this->jacobNumber.push_back(jacobsthal(i));
}

int PmergeMe::binarySearch(std::vector<int> vec, int x)
{
    int     left = 0, right = this->vecMainChain.size() - 1;

    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        if (vec[middle] == x)
            return (middle);
        if (vec[middle] < x)
            left = middle + 1;
        else
            right = middle - 1;
    }
    return (left);
}
