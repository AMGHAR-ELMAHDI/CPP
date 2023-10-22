/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:35:15 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 13:46:52 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    // std::cout << "RPN Default constructor called" << std::endl;
    this->num1 = 0;
    this->num2 = 0;
}

RPN::RPN(const RPN &obj)
{
//    std::cout << "RPN Copy constructor Called " << std::endl;
   *this = obj;
}

RPN &RPN::operator=(const RPN &other)
{
    // std::cout << "RPN Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        this->num1 = other.num1;
        this->num2 = other.num2;
        this->stack = other.stack;
        this->input = other.input;
    }
    return *this;
}

RPN::~RPN()
{
    // std::cout << "RPN Destructor called" << std::endl;
}

int checkSpecial(std::string str)
{
    if(str == "*" || str == "/" || str == "+" || str == "-")
        return(1);
    return(0);
}

int     RPN::parseInput(char *s)
{
    this->input = s;
    if(input.length() < 3)
      return(1);

    std::istringstream iss(input);
    while (std::getline(iss, input, ' '))
    {
        std::cout << "|" << input << "|" << std::endl;
        if(checkSpecial(input))
        {
            this->num2 = this->stack.top();
            this->stack.pop();
            this->num1 = this->stack.top();
            this->stack.pop();
            if(input == "/")
                this->stack.push(this->num1 / this->num2);
            else if(input == "*")
                this->stack.push(this->num1 * this->num2);
            else if(input == "+")
                this->stack.push(this->num1 + this->num2);
            else if(input == "-")
                this->stack.push(this->num1 - this->num2);
        }
        else
        {
            this->stack.push(std::atoi(input.c_str()));
        }
    }

    std::cout << "END VALUE: "<< this->stack.top() << std::endl;   
    return(0);
}
