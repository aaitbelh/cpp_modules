/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:24 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/22 15:46:15 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	
	try
	{
		Bureaucrat b;
		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
		std::cout << b << std::endl;
		std::cout << b << std::endl;
		b.Increment();
		std::cout << b << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout <<e.what() << std::endl;
	}
}