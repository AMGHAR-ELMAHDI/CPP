/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/12 19:08:58 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>

struct Data
{
    int         a;
    float       b;
    char	    c;
    bool	    bl;
    std::string	str;
};


class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &obj);
        Serializer &operator=(const Serializer &other);
    
    public:
        ~Serializer();

    //-----------------------------------------------------------------//
    
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
    
    //-----------------------------------------------------------------//
    
    static void    init_struct(Data *d);
    // static void    printUniPtr(uintptr_t raw);
    static void    printStruct(Data *d);
};




#endif