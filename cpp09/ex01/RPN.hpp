/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:32:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/22 23:02:11 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <stack>


class RPN
{
    private:
        std::stack<int> stack;
        int num1;
        int num2;
        std::string input;
    
    public:
        RPN();
        RPN(const RPN &obj);
        RPN &operator=(const RPN &other);
        ~RPN();
        
        //-------------------------------------------------------//
        int     parseInput(char *s);
};

#endif