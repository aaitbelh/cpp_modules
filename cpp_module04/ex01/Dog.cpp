/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:32:56 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/15 14:50:15 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->Brain = new class Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog &Other)
{
	this->Brain = new class Brain();
	*this = Other;
}

Dog& Dog::operator=(Dog &Other)
{
	this->type = Other.type;
	*this->Brain = *Other.Brain;
	return (*this);
}

Dog::~Dog()
{
	delete Brain;
	std::cout << "Dod deconstructor called" << std::endl;
}
void Dog::makeSound()const
{
	std::cout << "Dog can brak" << std::endl;
}