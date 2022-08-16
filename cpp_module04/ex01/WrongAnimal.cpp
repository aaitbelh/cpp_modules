/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:15:29 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/12 17:23:14 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal& Other)
{
	*this = Other;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& Other)
{
	this->type = Other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal deconstructor callde" << std::endl;
}

void WrongAnimal::makeSound()const
{
	std::cout << "WrongAimal Sound" << std::endl;
}

std::string WrongAnimal::getType()const
{
	return (this->type);
}