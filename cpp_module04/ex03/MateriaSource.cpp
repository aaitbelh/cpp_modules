/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:25:23 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/18 16:19:44 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

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
		this->Materiasrc[i] = Other.Materiasrc[i];
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
	AMateria *NewOne;
	NewOne->settype(type);
}

MateriaSource::~MateriaSource()
{
	
}