/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/14 21:42:37 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> numVector;

    numVector.push_back(1);
    numVector.push_back(3);
    numVector.push_back(4);
    numVector.push_back(2);
    numVector.push_back(5);
    numVector.push_back(6);
    
    std::cout << "----------------------------------------------" << std::endl;
    
    for (size_t i = 0; i < numVector.size(); i++)
    {
        std::cout << "Value: |" << numVector[i] << "|" << std::endl;
    }
    
    std::cout << "----------------------------------------------" << std::endl;
    
    try
    {
        easyfind(numVector, 2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
