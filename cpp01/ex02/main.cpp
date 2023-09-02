/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:23:54 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/02 22:53:14 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <iomanip>

// void       change(std::string *str, std::string &st)
// {
//     std::cout << &str << "\n" << &st << "\n";
// }

int main()
{
    std::string     new_str;
    new_str = "HI THIS BRAIN";

    std::string     &stringREF = new_str;
    std::string     *stringPTR = &new_str;

    //---print the Address of the variables---//
    std::cout << &new_str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    //---print the Value of the variables---//
    std::cout << new_str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    // change(stringPTR, stringREF);
}