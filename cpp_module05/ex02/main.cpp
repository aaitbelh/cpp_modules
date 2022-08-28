/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:24 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/25 19:30:34 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  <exception> 
# include  <iostream>
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

	try{	
		Bureaucrat NIR("NIR", 7);
		// PresidentialPardonForm KIRA("KIRA");
		// NIR.signForm(KIRA); 
		// KIRA.beSigned(NIR);
		// NIR.executeForm(KIRA);
		// KIRA.execute(NIR);
		// std::cout << "-----------------------" << std::endl;
		// ShrubberyCreationForm SBA("SBA");
		// NIR.signForm(SBA);
		// SBA.beSigned(NIR);
		// SBA.execute(NIR);
		// NIR.executeForm(SBA);
		// std::cout << "-----------------------" << std::endl;
		RobotomyRequestForm Anthony("Anthony");
		NIR.signForm(Anthony);
		Anthony.beSigned(NIR);
		Anthony.execute(NIR);
		NIR.executeForm(Anthony);
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}