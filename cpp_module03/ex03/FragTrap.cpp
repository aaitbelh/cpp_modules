/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 09:55:37 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/07 14:23:49 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->EnergyPoint = 100;
	this->AttackDamage = 20;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->EnergyPoint = 100;
	this->AttackDamage = 20;
	std::cout << "FragTrap " << Name << " constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& Other)
{
	*this = Other;
}

FragTrap& FragTrap::operator=(FragTrap &Other)
{
	this->AttackDamage = Other.AttackDamage;
	this->EnergyPoint = Other.AttackDamage;
	this->Name = Other.Name;
	this->HitPoint = Other.HitPoint;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if(this->EnergyPoint > 0)
	{
		std::cout << "FragTrap "<< Name << " said HighFives Guys GG!" << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "No Energy Points" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap deconstruct called " << std::endl;
}