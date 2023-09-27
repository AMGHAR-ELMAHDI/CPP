/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:45:08 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/27 18:31:28 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        const std::string   target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm( const ShrubberyCreationForm &obj);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        
        int    execute(Bureaucrat const & executor) const;
};

#endif