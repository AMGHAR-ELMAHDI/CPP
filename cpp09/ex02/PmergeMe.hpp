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
        std::vector<int>                                vectorSingle;
        std::vector<int>::iterator                      iterSingle;
        std::vector<std::pair<int, int> >               vectorDouble;
        std::vector<std::pair<int, int> >::iterator     iterDouble;
        std::deque<std::pair<int, int> >                deque;

    
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &obj);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();
        
        //-------------------------------------------------------//
        int    parseInput(char **s);
        void   printVectorSingle(std::string print);
        int    sortInput();
};

#endif