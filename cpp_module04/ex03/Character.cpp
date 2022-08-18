/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:29:48 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/18 14:58:34 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

const std::string& Character::getName(){
	return (this->name);
}

Character::Character():size(0){

}

Character::Character(std::string name):name(name),size(0){
}

Character::Character(Character &Other)
{
	*this = Other;
}


void Character::equip(AMateria* m)
{
	if(size < 4)
	{
		this->OwnMateria[count] = m;
		size++;
	}

}
void Character::unequip(int idx)
{
	if(idx >= 0 && idx < size)
		delete this->OwnMateria[idx];
	for(int i = idx; i < size; i++)
	{
		if(i < size - 1)
			this->OwnMateria[i] = this->OwnMateria[i + 1];
	}
	this->OwnMateria[i] = NULL;
}
void Character::clear()
{
	for(int i= 0; i < size; i++)
		this->unequip[i];
	this->size = 0;
}
Character& operator=(Character &Other)
{
	this->name = Other.name;
	this->clear();
	// for(int i = 0; i < Other.size; i++)
	// 	this->OwnMateria[i] = new Other.OwnMateria[i];
	return *this;
}
void	Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx < size)
		this->OwnMateria[idx].use(target);
}
