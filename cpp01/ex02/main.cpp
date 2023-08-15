/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:23:54 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/15 16:48:15 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <iomanip>

int main()
{
    std::string     new_str;
    std::string     *stringPTR = NULL;
    std::string     stringREF = NULL;

    new_str = "HI THIS BRAIN";

    stringPTR = &new_str;
    *stringREF = new_str;
    std::cout << new_str << "\t"<< stringPTR << "\t" << stringREF<< std::endl; 
}