/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:24 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/24 14:04:53 by aaitbelh         ###   ########.fr       */
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
		Bureaucrat NIR("NIR", 2);
		PresidentialPardonForm KIRA("KIRA");
		NIR.signForm(KIRA);
		std::cout << KIRA.getGrade() << std::endl;
		KIRA.setGrade(2);
		std::cout << KIRA.getGrade() << std::endl;
		PresidentialPardonForm L("L");
		std::cout << L.getName() << std::endl;
		L = KIRA;
		std::cout << L.getGrade() << std::endl;
		std::cout << L.getName() << std::endl;
		L.execute(NIR);
		std::cout << "-----------------------" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}