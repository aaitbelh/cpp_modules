/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:32:56 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/15 16:38:17 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog &Other)
{
	*this = Other;
}

Dog& Dog::operator=(Dog &Other)
{
	this->type = Other.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dod deconstructor called" << std::endl;
}
void Dog::makeSound()const
{
	std::cout << "Dog can brak" << std::endl;
}