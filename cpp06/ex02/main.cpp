/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/12 18:47:35 by eamghar          ###   ########.fr       */
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
    if(dynamic_cast<A *>(p))
        std::cout << "The Type of object pointed to by p is: A" << std::endl;
    else if(dynamic_cast<B *>(p))
        std::cout << "The Type of object pointed to by p is: B" << std::endl;
    else if(dynamic_cast<C *>(p))
        std::cout << "The Type of object pointed to by p is: C" << std::endl;
    else
        std::cout << "Unknown Type" << std::endl;
}

void identify(Base &p)
{
   //-----------------------------Check if A type---------------------------//
   try
   {
        A &a = dynamic_cast<A &>(p);
        a.~A();
        std::cout << "The Type of object referenced to by p is: A" << std::endl;
        return;
   }
   catch(const std::exception& e)
   {
        // std::cerr << e.what() << std::endl;
   }
   //-----------------------------Check if B type---------------------------//
   try
   {
        B &b = dynamic_cast<B &>(p);
        b.~B();
        std::cout << "The Type of object referenced to by p is: B" << std::endl;
        return;
   }
   catch(const std::exception& e)
   {
        // std::cerr << e.what() << std::endl;
   }
   //-----------------------------Check if C type---------------------------//
   try
   {
        C &c = dynamic_cast<C &>(p);
        c.~C();
        std::cout << "The Type of object referenced to by p is: C" << std::endl;
        return;
   }
   catch(const std::exception& e)
   {
        // std::cerr << e.what() << std::endl;
   }
}

int main()
{
    std::cout << "--------------------------------------" << std::endl;
    Base *b = generate();
    
    B   a;
    
    Base &dd = a;

    identify(b);
    std::cout << "--------------------------------------" << std::endl;

    identify(dd);
    std::cout << "--------------------------------------" << std::endl;

    delete b;
    return(0);
}
