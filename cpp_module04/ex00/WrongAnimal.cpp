/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:41:17 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/07 19:53:01 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound()const
{
	std::cout << "WrongAnimal had deferent sounds" << std::endl;
}

std::string WrongAnimal::getType()const
{
	return (this->type);
}

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &Other)
{
	*this = Other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal deconstructor Called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &Other)
{
	this->type = Other.type;
	return (*this);
}