/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:29:48 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/20 13:10:02 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


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
		for(int i = 0; i < 4; i++)
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
	if(idx >= 0 && OwnMateria[idx])
	{
		addNewMemory(OwnMateria[idx]);
		OwnMateria[idx] = NULL;
		this->size--;
	}
}
void Character::clear_all(void)
{
	t_lst *tmp;
	tmp = HeadOfMemory; 
	for(int i= 0; i < 4 ; i++)
	{
		tmp = HeadOfMemory;
		if(OwnMateria[i])
		{
			while(tmp)
			{
				if(tmp->ptr == OwnMateria[i])
					break;
				tmp = tmp->next;
			}
			if(!tmp)
				delete OwnMateria[i];
		}
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
	if(OwnMateria[idx] && (idx >= 0 && idx < 4))
	{
		this->OwnMateria[idx]->use(target);
	}
}

Character::~Character() {
	clear_all();
	t_lst *tmp;
	while(HeadOfMemory)
	{
		delete HeadOfMemory->ptr;
		tmp = HeadOfMemory;
		HeadOfMemory = HeadOfMemory->next;
		delete tmp;
	}
}