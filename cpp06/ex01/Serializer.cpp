/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:25:33 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/12 18:51:40 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer Default constructor called" << std::endl;
    s = 0;
}

Serializer::Serializer(const int ss) : s(ss)
{
    std::cout << "Serializer Parameterized constructor called" << std::endl;
    s = 0;
}

Serializer::Serializer(const Serializer &obj)
{
   std::cout << "Serializer Copy constructor Called " << std::endl;
   *this = obj;
}

Serializer &Serializer::operator=(const Serializer &other)
{
    std::cout << "Serializer Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        this->s = other.s;
    }
    return *this;
}

Serializer::~Serializer()
{
    std::cout << "Serializer Destructor called" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{       
    uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
    return(p);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *dd = reinterpret_cast<Data *>(raw);
    return(dd);
}

void    Serializer::init_struct(Data *d)
{
    d->a = 1;
    d->b = 2.2;
    d->c = 'z';
    d->bl = true;   
    d->str  = "HUH???"; 
}

// void    Serializer::printUniPtr(uintptr_t raw)
// {
//     int *i = reinterpret_cast<int *>(raw);
//     std::cout << "int: " << *i << std::endl;
    
//     float *f = reinterpret_cast<float *>(++i);
//     std::cout << "float: "<< *f << std::endl;

//     char *c = reinterpret_cast<char *>(++i);
//     std::cout << "char: " << *c << std::endl;

//     bool *b = reinterpret_cast<bool *>(++i);
//     std::cout << "bool: " << *b << std::endl;

//     std::string *s = reinterpret_cast<std::string *>(++i);
//     std::cout << "string: " << *s << std::endl;
// }

void    Serializer::printStruct(Data *d)
{
    std::cout << "int: " << d->a << std::endl;
    
    std::cout << "float: "<< d->b << std::endl;

    std::cout << "char: " << d->c << std::endl;

    std::cout << "bool: " << d->bl << std::endl;

    std::cout << "string: " << d->str << std::endl;
}
