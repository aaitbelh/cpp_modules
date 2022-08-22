/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:53:37 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/20 14:41:46 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = "NO IDEA";
}

Brain::Brain(Brain &Other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = Other;
}
Brain& Brain::operator=(Brain &Other)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = Other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
