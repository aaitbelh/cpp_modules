/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:29:48 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/19 21:58:46 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


void Character::addNewMemory(AMateria *ptr)
{
	t_lst *tmp = new t_lst();
	tmp->ptr = ptr;
	tmp->next = NULL;
	if(!HeadOfMemory)
	{
		HeadOfMemory = tmp;
	}
	else
	{
		t_lst *tmphead;
		tmphead = this->HeadOfMemory;
		while(HeadOfMemory->next)
			HeadOfMemory = HeadOfMemory->next;
		HeadOfMemory->next = tmp;
		HeadOfMemory = tmphead;
	}
	
	
}
std::string const & Character::getName()const{
	return (this->name);
}

Character::Character():name("NULL"),size(0){
HeadOfMemory = NULL;
for(int i =0 ; i < 4; ++i)
	this->OwnMateria[i] = NULL;
}

Character::Character(std::string name):name(name),size(0){
HeadOfMemory = NULL;
for(int i =0 ; i < 4; ++i)
	this->OwnMateria[i] = NULL;
}

Character::Character(Character &Other)
{
	*this = Other;
}


void Character::equip(AMateria* m)
{
	if(size < 4)
	{
		for(int i = 0; i < size; i++)
		{
			if(!OwnMateria[i])
			{
				OwnMateria[i] = m;
				size++;
				break;
			}
		}
	}

}
void Character::unequip(int idx)
{
	if((idx >= 0 && idx < size) && OwnMateria[idx])
	{
		addNewMemory(OwnMateria[idx]);
		OwnMateria[idx] = NULL;
		this->size--;
	}
}
void Character::clear_all(void)
{
	std::cout << this->size << std::endl;
	for(int i= 0; i < this->size; i++)
	{
		if(OwnMateria[i])
			delete OwnMateria[i];
	}
	this->size = 0;
}
Character& Character::operator=(Character &Other)
{
	this->name = Other.name;
	this->clear_all();
	for(int i = 0; i < Other.size; ++i)
	{
		this->OwnMateria[i] = Other.OwnMateria[i]->clone();
	}
	return *this;
}
void	Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx < size)
	{
		std::cout << this->OwnMateria[idx]->getType() << std::endl;
		this->OwnMateria[idx]->use(target);
	}
}

Character::~Character() {
	clear_all();
	while(HeadOfMemory)
	{
		HeadOfMemory = HeadOfMemory->next;
		delete HeadOfMemory->ptr;;
	}
}