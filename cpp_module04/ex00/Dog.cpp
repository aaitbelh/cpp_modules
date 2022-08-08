/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:43:14 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/07 19:51:57 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound()const
{
	std::cout << "Dog is Bark" << std::endl;
}

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(Dog &Other)
{
	*this = Other;
}

Dog& Dog::operator=(Dog &Other)
{
	this->type = Other.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor Called" << std::endl;
}