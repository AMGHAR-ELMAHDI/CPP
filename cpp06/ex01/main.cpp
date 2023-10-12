/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/12 18:58:17 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Serializer ser(1);
    Data d;

    Serializer::init_struct(&d);
    std::cout << "------------------Struct Before:--------------------" << std::endl;
    Serializer::printStruct(&d);

    std::cout << "------------------Uintptr_t Values:-----------------" << std::endl;
    uintptr_t kl = ser.serialize(&d);
    // Serializer::printUniPtr(kl);
    
    std::cout << "------------------Struct After:---------------------" << std::endl;
    Data *test = ser.deserialize(kl);
    Serializer::printStruct(test);
    
    std::cout << "----------------------------------------------------" << std::endl;
    return(0);
}
