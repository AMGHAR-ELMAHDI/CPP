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

class PmergeMe
{
    private:
        std::stack<int> stack;
        int num1;
        int num2;
        std::string input;
    
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &obj);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();
        
        //-------------------------------------------------------//
        int     parseInput(char *s);
};

#endif