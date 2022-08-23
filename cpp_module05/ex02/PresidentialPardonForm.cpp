/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:01:43 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/23 20:57:40 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("__NONAMESET",72, 45),target("__NONAMESET"){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target,25, 5),target(target)
{
	
}