/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/16 15:41:41 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int length = 5;

    std::cout << "------------------Arr1------------------" << std::endl;
    int Arr1[5] = { 1545, 2780, -12121, 4122313, 5000 };
    iter(Arr1, length, &printElements < int >);


    std::cout << "------------------Arr2------------------" << std::endl;
    double Arr2[] = { 1.122, 2.2323, 3.443, 4.455, 5455.5 };
    iter(Arr2, length, &printElements < double > );


    std::cout << "------------------Arr3------------------" << std::endl;
    char Arr3[] = { 'a', 'b', 'c', 'd', 'e' };
    iter(Arr3, length, &printElements < char >);



    std::cout << "------------------Arr4------------------" << std::endl;
    std::string Arr4[] = { "one", "two", "three", "four", "five" };
    iter(Arr4, length, &printElements < std::string > );

    return 0;
}
