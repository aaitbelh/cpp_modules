/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:58:15 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/15 16:38:14 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


void Cat::makeSound()const
{
	std::cout << "Cat don't bark" << std::endl;
}

Cat::Cat()
{
	this->type = "Cat";
}

Cat::Cat(Cat &Other)
{
	*this = Other;	
}

Cat& Cat::operator=(Cat &Other)
{
	this->type = Other.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}