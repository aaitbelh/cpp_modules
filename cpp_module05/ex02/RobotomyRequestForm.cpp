/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casper <casper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:57:50 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/24 12:15:49 by casper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm():Form("__NONAMESET",72, 45),target("__NONAMESET"){
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target,72, 45),target(target)
{	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &Other):Form("__NONAMESET",72, 45)
{
	*this = Other;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &Other)
{
	this->target = Other.target;
	this->Form::operator=(Other);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}
void RobotomyRequestForm::execute(Bureaucrat const & executor)const
{
	if(this->getSigne() != 1)
		throw (FormNotSigned);
	if(executor.getGrade() <= 72 && executor.getGrade() <= 45)
	{
		srand(time(0));
		std::cout << random() % 2 << std::endl;
		if(!(rand() % 2))
			std::cout << this->target << " has been robotomized" << std::endl;
		else
			std::cout << this->target << " the robotomy failed" << std::endl;
	}
	else
		throw (executor.GradeTooLowException);
}

