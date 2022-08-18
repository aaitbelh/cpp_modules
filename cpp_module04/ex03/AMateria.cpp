/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:40:50 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/18 16:12:25 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	
}

AMateria::AMateria(std::string const& type):type(type){
}
AMateria::AMateria(AMateria &Other)
{
	*this = Other;
}

AMateria& AMateria::operator=(AMateria &Other)
{
	this->type = Other.type;
}

AMateria::~AMateria(){
}

void AMateria::settype(std::string const &type)
{
	this->type = type;
}
const std::string& AMateria::getType() const
{
	return (this->type);
}
