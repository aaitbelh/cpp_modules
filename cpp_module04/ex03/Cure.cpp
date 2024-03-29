/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:40:22 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/19 18:45:51 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure"){
}
Cure::Cure(Cure &Other)
{
	*this = Other;
}

Cure& Cure::operator=(Cure &Other)
{
	this->type = Other.type;
	return *this;
}

Cure::~Cure()
{
	
}
void Cure::use(ICharacter &target)
{
	std::cout << "heals "<< target.getName() << "’s wounds" << std::endl;
}
AMateria* Cure::clone()const
{
	return (new Cure());
}