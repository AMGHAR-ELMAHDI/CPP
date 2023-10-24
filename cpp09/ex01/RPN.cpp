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

int countSpecial(std::string str)
{
    int count = 0;

    for (size_t i = 0; i < str.length(); i++)
        if(str[i] == '*' || str[i] == '/' || str[i] == '+' || str[i] == '-')
            count++;

    return(count);
}

int   checkDigit(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if(!std::isdigit(str[i]))
            return(1);
            
    int     num = std::atoi(str.c_str());
    if(num < 0 || num > 9)
        return(1);
    return(0);
}

int     RPN::parseInput(char *s)
{
    int     index = 0;
    this->input = s;
    std::string sss = this->input;
    if(input.length() < 3)
      return(1);

    std::istringstream iss(input);
    while (std::getline(iss, input, ' '))
    {
        if(index < 2 && iss.eof())
            return(1);
        if(checkSpecial(input))
        {
            this->num2 = this->stack.top();
            this->stack.pop();
            this->num1 = this->stack.top();
            this->stack.pop();
            if(input == "/")
            {
                if(this->num2 == 0)
                    return(1);
                this->stack.push(this->num1 / this->num2);
            }
            else if(input == "*")
                this->stack.push(this->num1 * this->num2);
            else if(input == "+")
                this->stack.push(this->num1 + this->num2);
            else if(input == "-")
                this->stack.push(this->num1 - this->num2);
        }
        else
        {
            if(checkDigit(input) == 1)
                return(1);
            this->stack.push(std::atoi(input.c_str()));
            index++;
        }
    }

    if(countSpecial(sss) != index - 1)
        return(1);

    std::cout << "END VALUE: "<< this->stack.top() << std::endl;   
    return(0);
}
