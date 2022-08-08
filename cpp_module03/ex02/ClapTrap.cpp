/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:00:42 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/07 09:57:37 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->EnergyPoint > 0 && this->HitPoint)
	{
		this->HitPoint += amount;
		std::cout << this->Name << " repaired him self by " << amount
			<< " and get " << this->HitPoint << std::endl;
		EnergyPoint--;
	}
	else
		std::cout << "No energy Point" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if(EnergyPoint > 0 && this->HitPoint)
	{
		std::cout << this->Name << " attacks " << target << ", causing "
			<< this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "No energy Point" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(this->EnergyPoint > 0 && this->HitPoint)
	{
		this->HitPoint -= amount;
		if(this->HitPoint < 0)
			this->HitPoint = 0;
		std::cout << this->Name << " take a " 
			<< amount << " damage HitPoint now are " << this->HitPoint << " Points" << std::endl;
	}
	else
		std::cout << "No energy Point" << std::endl;
}

ClapTrap::ClapTrap()
{

	this->Name = "UNKNOWN";
	this->HitPoint = 0;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->Name = name;
	this->HitPoint = 0;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
	std::cout << name << " ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap &Other)
{
	*this = Other;
}
ClapTrap& ClapTrap::operator=(ClapTrap &Other)
{
	this->EnergyPoint = Other.EnergyPoint;
	this->HitPoint = Other.EnergyPoint;
	this->Name = Other.Name;
	this->AttackDamage = Other.AttackDamage;
	return (*this);
}