/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:58:15 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/15 13:39:28 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


void Cat::makeSound()const
{
	std::cout << "Cat don't bark" << std::endl;
}

Cat::Cat()
{
	this->Brain = new class Brain();
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat &Other)
{
	this->Brain = new class Brain();
	*this = Other;	
}

Cat& Cat::operator=(Cat &Other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = Other.type;
	*this->Brain = *Other.Brain;
	return (*this);
}

Cat::~Cat()
{
	delete Brain;
	std::cout << "Cat destructor called" << std::endl;
}