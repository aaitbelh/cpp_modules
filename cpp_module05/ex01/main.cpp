/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:24 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/22 18:51:51 by aaitbelh         ###   ########.fr       */
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
		Form test1("KIRA", 150, 0);
		Form test2("KIRA", 1, 0);
		Form b("Mamella", 150, 0);
		Bureaucrat a("grboz", 1);
		b.beSigned(a);
		std::cout << b.getSigne() << std::endl;
		a.signForm(b);
	}
	catch(std::exception &e)
	{
		std::cout <<e.what() << std::endl;
	}
}