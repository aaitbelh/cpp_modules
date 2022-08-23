/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:24 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/23 23:17:05 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  <exception> 
# include  <iostream>
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

	try{	
		RobotomyRequestForm a("NATSU");
		ShrubberyCreationForm l("mamella");
		l.setGrade(120);
		std::cout << l.getGrade() << std::endl;
		ShrubberyCreationForm l2(l);
		l2 = l;
		std::cout << l2.getGrade() << std::endl;
		Bureaucrat b("SOMEONE", 1);
		l.execute(b);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}