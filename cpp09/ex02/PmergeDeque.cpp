/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeDeque.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:35:15 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 13:46:52 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMeDeque::PmergeMeDeque() : checkStruggler(false)
{
}

PmergeMeDeque::PmergeMeDeque(const PmergeMeDeque &obj)
{
   *this = obj;
}

PmergeMeDeque &PmergeMeDeque::operator=(const PmergeMeDeque &other)
{
    if (this != &other)
        (void)other;
    return *this;
}

PmergeMeDeque::~PmergeMeDeque()
{
}

int   PmergeMeDeque::checkWhiteSpace(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if(std::isspace(str[i]) == 1)
            return(1);
    return(0);
}

int   PmergeMeDeque::checkDigit(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if(!std::isdigit(str[i]))
            return(1);
    return(0);
}

void   PmergeMeDeque::printdequeMainChain(std::string print)
{
    std::cout << print;
    for (std::deque<int>::iterator it = this->dequeMainChain.begin(); it != this->dequeMainChain.end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
}

void   PmergeMeDeque::printdequePend(std::string print)
{
    std::cout << print;
    for (std::deque<int>::iterator it = this->dequePend.begin(); it != this->dequePend.end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
}

void   PmergeMeDeque::printJacobNumbers(std::string print)
{
    std::cout << print;
    for (std::deque<int>::iterator it = jacobNumber.begin(); it != jacobNumber.end(); it++)
            std::cout << *it << " ";
    std::cout <<  std::endl;
}

void   PmergeMeDeque::printdequetorDouble(std::string print)
{
    std::cout << print << std::endl;
    for (iterDouble = dequeDouble.begin(); iterDouble != dequeDouble.end(); iterDouble++)
        std::cout << "|" << std::setw(5) << iterDouble->first << "|" << std::setw(5) << iterDouble->second << "|" << std::endl;
    std::cout << std::endl;
}

int     PmergeMeDeque::parseInput(char **s, int ac)
{
    int     i = 0, outInt;
    std::string str;

    start = clock();

    while (s[++i])
    {
        str = s[i];
        if(str.length() == 0 || checkWhiteSpace(str) || checkDigit(str))
            return(1);
        std::stringstream stream(str);
        if(!(stream >> outInt))
            return(1);
        outInt  = std::atoi(str.c_str());
        this->dequeMainChain.push_back(outInt);
    }
    if (this->dequeMainChain.empty())
        return (1);

    this->sortInput();

    stop = clock();

    double duration = ((double)(stop - start) / CLOCKS_PER_SEC);
    std::cout << "Time to process a range of " << ac << " elements with std::deque: " << duration << std::endl;
    return(0);
}

int    PmergeMeDeque::sortInput()
{
    //Remove struggler from Main Chain
    if (this->dequeMainChain.size() % 2 != 0)
    {
        this->struggler = dequeMainChain.back();
        checkStruggler = true;
        dequeMainChain.pop_back();
    }

    //Fill Double deque with pairs from Main chain
    for (iterSingle = dequeMainChain.begin(); iterSingle != dequeMainChain.end(); iterSingle += 2)
        dequeDouble.push_back(std::make_pair(*iterSingle, *(iterSingle + 1)));

    //Sort the Pairs so that the smaller number is always the second one
    for (iterDouble = dequeDouble.begin(); iterDouble != dequeDouble.end(); iterDouble++)
        if(iterDouble->first < iterDouble->second)
            std::swap(iterDouble->first, iterDouble->second);

    //Sort the Main chain inside the DoubleVec and fill the Main Chain Vec with the first numbers and Pend Vec with second numbers
    std::sort(dequeDouble.begin(), dequeDouble.end());
    dequeMainChain.clear();
    for (iterDouble = dequeDouble.begin(); iterDouble != dequeDouble.end(); iterDouble++)
    {
        if(iterDouble == dequeDouble.begin())
            dequeMainChain.push_back(iterDouble->second);
        dequeMainChain.push_back(iterDouble->first);
        dequePend.push_back(iterDouble->second);
    }

    sortUsingJacobsthalNumbers();
    return(0);
}

void    PmergeMeDeque::sortUsingJacobsthalNumbers()
{
    generateJacobsthalNumbers(15);
    // printJacobNumbers("Jacob Numbers: ");

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
    for (std::deque<int>::iterator it = jacobCombination.begin(); it != jacobCombination.end(); it++)
    {
        int num = *it - 1;
        if(num < (int) dequePend.size())
        {
            iterSingle = binarySearch(dequeMainChain, dequePend[num]) + dequeMainChain.begin();
			dequeMainChain.insert(iterSingle, dequePend[num]);
        }
    }
    //add the struggler
    if (checkStruggler == true)
    {
        int index = binarySearch(dequeMainChain, struggler);
		dequeMainChain.insert(index + dequeMainChain.begin(), struggler);
    }
}

int PmergeMeDeque::jacobsthal(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

void PmergeMeDeque::generateJacobsthalNumbers(int limit)
{
  for (int i = 0; i < limit; i++)
    this->jacobNumber.push_back(jacobsthal(i));
}

int PmergeMeDeque::binarySearch(std::deque<int> vec, int x)
{
    int     left = 0, right = this->dequeMainChain.size() - 1;

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
