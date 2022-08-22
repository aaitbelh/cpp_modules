/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Air.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:52:43 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/20 11:06:09 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Air.hpp"
Air::Air():AMateria("air")
{
}

Air::Air(Air &Other)
{
	*this = Other;
}
Air& Air::operator=(Air &Other)
{
	this->type = Other.getType();
	return *this;
}
void Air::use(ICharacter &target){
	std::cout << target.getName() << " use the power of the air" << std::endl;
}
AMateria* Air::clone()const
{
	return (new Air());
}
Air::~Air()
{
	
}