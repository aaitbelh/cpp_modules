/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:01:43 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/25 17:37:23 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm",25, 5),target("__NONAMESET"){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target,25, 5),target(target)
{
	
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &Other):Form("PresidentialPardonForm",25, 5)
{
	*this = Other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &Other)
{
	this->target = Other.target;
	this->Form::operator=(Other);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){
	
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)const
{
	if(this->getSigne() != 1)
		throw(this->FormNotSigned);
	if(executor.getGrade() <= getExec())
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		throw (this->GradeTooLowExceptions);
}
