/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:17:15 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/06 22:33:18 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C : public Base
{
    public:
        C();
        C(const C &obj);
        C &operator=(const C &other);
        ~C();
};

#endif