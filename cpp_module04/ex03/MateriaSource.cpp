/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:25:23 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/19 19:01:40 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	this->count = 0;
}

MateriaSource::MateriaSource(MateriaSource &Other)
{
	*this = Other;
	
}
MateriaSource& MateriaSource::operator=(MateriaSource &Other)
{
	for(int i = 0; i < Other.count; ++i)
		this->Materiasrc[i] = Other.Materiasrc[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if(this->count < 4)
	{
		this->Materiasrc[count] = m;	
		this->count++;
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < count; ++i)
	{
		if(Materiasrc[i]->getType() == type)
		{
			std::cout << "type == " << type << std::endl;
			return(Materiasrc[i]->clone());
		}
	}
	return NULL;
}

MateriaSource::~MateriaSource()
{
	for(int i =0 ; i < this->count; i++)
		delete Materiasrc[i];
}