/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:24 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/25 16:58:53 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
int main()
{
	
	try
	{
		Bureaucrat a("NANACHI", 150);
		Form KIRA("KIRA", 149, 0);
		Form RYOK("RYOK", 1, 0);
		a.signForm(KIRA);
		KIRA.beSigned(a);
		RYOK = KIRA;
		std::cout << RYOK.getName() << std::endl;
		std::cout << RYOK.getGrade() << std::endl;
		std::cout << RYOK.getSigne() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout <<e.what() << std::endl;
	}
}