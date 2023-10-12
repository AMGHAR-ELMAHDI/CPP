/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:32:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/01 17:10:53 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <sstream>


template<typename T>

class Array
{
    private:
        T   *arr;
        unsigned int num;

    public:

        //--------------------Default constructor-------------------------//
        Array() : num(0)
        {
            std::cout << "Array Default constructor called" << std::endl;
            arr = new T[num];
        }
        

        //--------------------Parameterized constructor-------------------------//
        Array(unsigned int n) : num(n)
        {
            std::cout << "Array Parameterized constructor called" << std::endl;
            arr = new T[num];
        };


        //--------------------Copy constructor-------------------------//
        Array(const Array &obj)
        {
            std::cout << "Array Copy constructor Called " << std::endl;
            *this = obj;
        };


        //--------------------Copy assignement opperator-------------------------//
        Array &operator=(const Array &other)
        {
            std::cout << "Array Copy assignement opperator called " << std::endl; 
            if (this != &other)
            {
                if(this->arr)
                    delete[] this->arr;

                this->num = other.num;

                this->arr = new T[this->num];

                for (size_t i = 0; i < this->num; i++)
                    this->arr[i] = other.arr[i];
            }

            return *this;
        };
        

        //--------------------Destructor-------------------------//
        ~Array()
        {
           std::cout << "Array Destructor called" << std::endl;
            delete[] this->arr;
        };


        //--------------------Size Function-------------------------//
        unsigned int size()
        {
            return(this->num);
        }

        //--------------------Overload of the subscript operator: [ ]-------------------------//
        T   &operator[](unsigned int nn)
        {
            if(nn >= this->size())
                throw IndexIsOutOfBounds();
            else
                return(this->arr[nn]);
        }

        //--------------------IndexIsOutOfBounds exception-------------------------//
        class IndexIsOutOfBounds : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("Index is out of bounds exception called");
                }
        };
};

#endif