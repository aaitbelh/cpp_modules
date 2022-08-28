/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:57:50 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/25 17:45:30 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",72, 45),target("__NONAMESET"){
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm",72, 45),target(target)
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
	if(executor.getGrade() <= 45)
	{
		srand(time(0));
		if(!(rand() % 2))
			std::cout << this->target << " has been robotomized" << std::endl;
		else
			std::cout << this->target << " the robotomy failed" << std::endl;
	}
	else
		throw (executor.GradeTooLowException);
}

