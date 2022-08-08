/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:31:36 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/07 19:51:48 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound()const
{
	std::cout << "Cat d'ont Bark"<< std::endl;
}


Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor Called" << std::endl;
}

Cat::Cat(Cat &Other)
{
	*this = Other;
}

Cat& Cat::operator=(Cat &Other)
{
	this->type = Other.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat deconstructo Called" << std::endl;
}