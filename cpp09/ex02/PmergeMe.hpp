/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:32:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/23 00:45:10 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <stack>
#include <vector>

class PmergeMe
{
    private:
        int                                             struggler;
        //-------------------------Vectors-------------------------//
        std::vector<int>                                vecMainChain;
        std::vector<int>                                vecPend;
        std::vector<int>                                jacobNumber;
        std::vector<int>                                jacobCombination;
        std::vector<std::pair<int, int> >               vectorDouble;
        //-------------------------Iterators-----------------------//
        std::vector<int>::iterator                      iterSingle;
        std::vector<std::pair<int, int> >::iterator     iterDouble;
        //---------------------------------------------------------//
    
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &obj);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();
        
        //-------------------------------------------------------//
        int     parseInput(char **s);
        void    printvecMainChain(std::string print);
        void    printvecPend(std::string print);
        void    printVectorDouble(std::string print);
        int     sortInput();
        void    sortUsingJacobsthalNumbers();
        void    generateJacobsthalNumbers(int limit);
        int     jacobsthal(int n);
        int     binarySearch(std::vector<int> vec, int x);
};

#endif