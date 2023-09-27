/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:32:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/27 19:15:49 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>

class convert
{
    private:
        const std::string   name;
        int                 grade;

    public:
        convert();
        convert(const std::string Name, int grade);
        convert(const convert &obj);
        convert &operator=(const convert &other);
        ~convert();
        //-------------------Getters-----------------//
        int getGrade(void)const;
        const std::string getName(void)const;
        //-------------------Grade Modifiers-----------------//
        void    incrementGrade();
        void    decrementGrade();

};

#endif