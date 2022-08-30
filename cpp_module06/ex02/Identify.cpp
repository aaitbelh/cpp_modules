/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:01:17 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/29 16:59:14 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"


void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "THE TYPE IS : A" << std::endl;
	}
	catch(std::exception &e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "THE TYPE IS : B" << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "THE TYPE IS : C" << std::endl;
		}
	}
}

void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "THE TYPE IS : A" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "THE TYPE IS : B" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "THE TYPE IS : C" << std::endl;
}

Base * generate(void)
{
	srand(time(0));
	int random_number = 1 + rand() % 3;
	switch(random_number)
	{
		case 1:
			// std::cout << "IS A" << std::endl;
			return (new A());
		case 2:
			// std::cout << "IS B" << std::endl;
			return (new B());
		case 3:
			// std::cout << "IS C" << std::endl;
			return (new C());
	}
	return (new A());
}