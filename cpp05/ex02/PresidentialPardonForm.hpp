/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:44:27 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 19:56:50 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        const std::string   target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        int    execute(Bureaucrat const & executor)const;
        ~PresidentialPardonForm();
};

#endif