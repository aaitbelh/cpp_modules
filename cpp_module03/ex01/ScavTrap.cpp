/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:38:18 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/07 11:45:09 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


void ScavTrap::attack(const std::string& target)
{
	if(this->EnergyPoint > 0 && this->HitPoint)
	{
		std::cout << "ScavTrap " << Name << " attack cosing " << this->AttackDamage << " damage to " << target << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "No Energy Point" << std::endl;
}

void ScavTrap::guardGate()
{
	if(this->EnergyPoint > 0 && this->HitPoint)
	{
		std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
		EnergyPoint--;
	}
	else
		std::cout << "No Energy Point" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap &Other)
{
	*this = Other;
}
ScavTrap& ScavTrap::operator=(ScavTrap &Other)
{
	this->AttackDamage = Other.AttackDamage;
	this->EnergyPoint = Other.EnergyPoint;
	this->HitPoint = Other.HitPoint;
	this->Name = Other.Name;
	return (*this);
}

ScavTrap::ScavTrap()
{
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap "<< name << " constructor called" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destrucor called" << std::endl;
}
