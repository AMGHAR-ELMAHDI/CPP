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
#include <ctime>


class PmergeMe
{
    private:

        int                                             struggler;
        bool                                            checkStruggler;
        clock_t	                                        start;
        clock_t                                         stop;
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
        int     parseInput(char **s, int ac);
        void    printvecMainChain(std::string print);
        void    printvecPend(std::string print);
        void    printVectorDouble(std::string print);
        void    printJacobNumbers(std::string print);
        int     sortInput();
        void    sortUsingJacobsthalNumbers();
        void    generateJacobsthalNumbers(int limit);
        int     jacobsthal(int n);
        int     binarySearch(std::vector<int> vec, int find);
};



class PmergeMeDeque
{
    private:

        int                                            struggler;
        bool                                           checkStruggler;
        clock_t	                                       start;
        clock_t                                        stop;
        //-------------------------deque-------------------------//
        std::deque<int>                                dequeMainChain;
        std::deque<int>                                dequePend;
        std::deque<int>                                jacobNumber;
        std::deque<int>                                jacobCombination;
        std::deque<std::pair<int, int> >               dequeDouble;
        //-------------------------Iterators-----------------------//
        std::deque<int>::iterator                      iterSingle;
        std::deque<std::pair<int, int> >::iterator     iterDouble;
        //---------------------------------------------------------//
    
    public:
        PmergeMeDeque();
        PmergeMeDeque(const PmergeMeDeque &obj);
        PmergeMeDeque &operator=(const PmergeMeDeque &other);
        ~PmergeMeDeque();
        
        //-------------------------------------------------------//
        int     parseInput(char **s, int ac);
        void    printdequeMainChain(std::string print);
        void    printdequePend(std::string print);
        void    printdequetorDouble(std::string print);
        void    printJacobNumbers(std::string print);
        int     sortInput();
        void    sortUsingJacobsthalNumbers();
        void    generateJacobsthalNumbers(int limit);
        int     jacobsthal(int n);
        int     binarySearch(std::deque<int> dq, int find);
        int     checkWhiteSpace(std::string str);
        int     checkDigit(std::string str);

};


#endif