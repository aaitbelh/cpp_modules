/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:02:16 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/25 19:19:02 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm",145, 137),target("__NONAMESET")
{
	
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreationForm",145, 137),target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &Other):Form("ShrubberyCreationForm",145, 137)
{
	*this = Other;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &Other)
{
	this->target = Other.target;
	this->Form::operator=(Other);
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{

	if(this->getSigne() != 1)
		throw(this->FormNotSigned);
	if(executor.getGrade() <= getExec())
	{
		
		std::string nameOfFile = target + "_shrubbery";
		std::ofstream outfile (nameOfFile);
  		outfile << "                                              ." << std::endl;
        outfile << "                                   .         ;" << std::endl;
        outfile << "      .              .              ;%     ;;" << std::endl;
        outfile << "        ,           ,                :;%  %;" << std::endl;
        outfile << "         :         ;                   :;%;'     .," << std::endl;
        outfile << ",.        %;     %;            ;        %;'    ,;" << std::endl;
        outfile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        outfile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
        outfile << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        outfile << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        outfile << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        outfile << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
        outfile << "           `@%:.  :;%.         ;@@%;'" << std::endl;
        outfile << "             `@%.  `;@%.      ;@@%;" << std::endl;
        outfile << "               `@%%. `@%%    ;@@%;" << std::endl;
        outfile << "                 ;@%. :@%%  %@@%;" << std::endl;
        outfile << "                   %@bd%%%bd%%:;" << std::endl;
        outfile << "                     #@%%%%%:;;" << std::endl;
        outfile << "                     %@@%%%::;" << std::endl;
        outfile << "                     %@@@%(o);  . '" << std::endl;
        outfile << "                     %@@@o%;:(.,'" << std::endl;
        outfile << "                 `.. %@@@o%::;" << std::endl;
        outfile << "                    `)@@@o%::;" << std::endl;
        outfile << "                     %@@(o)::;" << std::endl;
        outfile << "                    .%@@@@%::;" << std::endl;
        outfile << "                    ;%@@@@%::;." << std::endl;
        outfile << "                   ;%@@@@%%:;;;." << std::endl;
        outfile << "               ...;%@@@@@%%:;;;;,.." << std::endl;
	}
	else
		throw (executor.GradeTooLowException);
}