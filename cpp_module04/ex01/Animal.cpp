/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:06:04 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/15 09:03:32 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType()const
{
	return (this->type);
}

Animal::Animal()
{
	std::cout << "Animal consrtuctor called" << std::endl;
}

Animal::Animal(Animal &Other)
{
	*this = Other;
}

Animal& Animal::operator=(Animal &Other)
{
	this->type = Other.type;
	return (*this);
}
Animal::~Animal()
{
	std::cout << "Animal deconstructor called" << std::endl;
}
void Animal::makeSound()const
{
	std::cout << "Wrong Sound from Wrong Animal" << std::endl;
}