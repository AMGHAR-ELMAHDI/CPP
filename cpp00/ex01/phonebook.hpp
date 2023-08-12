/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:03:24 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/12 17:13:47 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK

#include "contact.hpp"
#include <iostream>
#include <iomanip>

class  PhoneBook
{
    private:
        Contact  arr[8];
        
    public:
        void setarr(Contact oo, int index);
        Contact getarr(int index);
        int add(PhoneBook *phone, Contact *ctt);
        int search(PhoneBook *phone);
        int checkWhiteSpace(std::string str);
        int checkDigit(std::string str);
    //ADD
    //SEARCH
    //EXIT
};



#endif