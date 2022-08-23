/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:02:16 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/23 23:20:03 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("__NONAMESET",72, 45),target("__NONAMESET")
{
	
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target,145, 137),target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &Other):Form(Other.target,145, 137)
{
	std::cout << "MOK" << std::endl;
	*this = Other;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &Other)
{
	std::cout << "MAMAK" << std::endl;
	this->target = Other.target;
	this->Form::operator=(Other);
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{
	if(executor.getGrade() <= getGrade() && executor.getGrade() <= getExec())
	{
		
		std::ofstream outfile (target + "_shrubbery");
		outfile << "       _-_       \n";
		outfile <<"    /~~   ~~\\    \n";
		outfile <<" /~~         ~~\\ \n";
		outfile <<"{               } \n";
		outfile <<" \\  _-     -_  / \n";
		outfile <<"   ~  \\ //  ~    \n";
		outfile <<"_- -   | | _- _   \n";
		outfile <<"  _ -  | |   -_   \n";
		outfile <<"      // \\       \n";
	}
	else
		throw (executor.GradeTooLowException);
}