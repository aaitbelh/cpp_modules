/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:24 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/22 14:36:45 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	
	try
	{
		Bureaucrat b("Mamella", 150);
		std::cout << b.getName() << std::endl;
		std::cout << b << std::endl;
		std::cout << b << std::endl;
		b.Decrement();
		std::cout << b << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout <<e.what() << std::endl;
	}
}