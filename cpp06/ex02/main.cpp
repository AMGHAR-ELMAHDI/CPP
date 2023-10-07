/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/07 17:34:32 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate(void)
{
    srand(time(NULL));
    
    int r  = (rand() % 3);
    
    if(r == 0)
        return(new A);        
    else if(r == 1)
        return(new B);
    else if(r == 2)
        return(new C);
    else
        return(new A);
}

void identify(Base *p)
{
    //--------------Check if Object is of type A derived----------------------//
    if(dynamic_cast<A *>(p))
        std::cout << "The Type of object pointed to by p is: A" << std::endl;
    else if(dynamic_cast<B *>(p))
        std::cout << "The Type of object pointed to by p is: B" << std::endl;
    else if(dynamic_cast<C *>(p))
        std::cout << "The Type of object pointed to by p is: C" << std::endl;
    else
        std::cout << "Unknown Type" << std::endl;
}

// void identify(Base &p)
// {
    
// }

int main()
{
    Base *b = generate();
    identify(b);
    delete b;
    return(0);
}
