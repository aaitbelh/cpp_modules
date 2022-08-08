/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:25:10 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/07 19:52:39 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


void	Animal::makeSound()const
{
	std::cout << "Animal had deferent sounds" << std::endl;
}

std::string Animal::getType()const
{
	return (this->type);
}

Animal::Animal()
{
	std::cout << "Animal constructor Called" << std::endl;
}

Animal::Animal(Animal &Other)
{
	*this = Other;
}

Animal::~Animal()
{
	std::cout << "Animal deconstructor Called" << std::endl;
}

Animal& Animal::operator=(Animal &Other)
{
	this->type = Other.type;
	return (*this);
}
