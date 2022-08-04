/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:00:42 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/04 14:42:45 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->EnergyPoint > 0)
	{
		std::cout << this->Name << " repaired him self by " << amount
			<< " and get " << this->HitPoint + amount << std::endl;
		this->HitPoint+=amount;
		EnergyPoint--;
	}
	else
		std::cout << "No energy Point" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if(EnergyPoint > 0)
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
	if(this->EnergyPoint > 0)
	{
		std::cout << this->Name << " take a " 
			<< amount << " damage HitPoint now are" << this->HitPoint - amount << " Points" << std::endl;
		this->HitPoint -= amount;
	}
	else
		std::cout << "No energy Point" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->Name = name;
	this->HitPoint = 0;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
	std::cout << name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}