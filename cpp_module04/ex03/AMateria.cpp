/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:40:50 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/20 12:56:29 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "it havent any power to use" << std::endl;
}

AMateria::AMateria():type("NULL"){
	
}

AMateria::AMateria(std::string type):type(type){
}
AMateria::AMateria(AMateria &Other)
{
	*this = Other;
}

AMateria& AMateria::operator=(AMateria &Other)
{
	this->type = Other.type;
	return *this;
}

AMateria::~AMateria(){
}

void AMateria::settype(std::string type)
{
	this->type = type;
}
const std::string& AMateria::getType() const
{
	return (this->type);
}
