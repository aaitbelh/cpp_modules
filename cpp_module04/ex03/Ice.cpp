/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:33:19 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/18 19:59:35 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){
}
Ice::Ice(Ice &Other)
{
	*this = Other;
}
AMateria* Ice::clone()const
{
	return (new Ice());
}
Ice& Ice::operator=(Ice &Other)
{
	this->type = Other.type;
	return *this;
}
Ice::~Ice(){
	
}
void Ice::use(ICharacter& target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;;
}