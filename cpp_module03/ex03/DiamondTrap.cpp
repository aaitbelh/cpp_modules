/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:50:04 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/07 14:23:57 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::attack(std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->name << " and ClapTrap name is " << ClapTrap::Name << std::endl;	
}

DiamondTrap::DiamondTrap()
{
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->AttackDamage =  FragTrap::AttackDamage;
	std::cout << "DioamondTrap constuctor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), name(name)
{
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->AttackDamage =  FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << this->name <<  " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &Other)
{
	*this = Other;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& Other)
{
	this->AttackDamage = Other.AttackDamage;
	this->EnergyPoint = Other.EnergyPoint;
	this->HitPoint = Other.HitPoint;
	this->name = Other.name;
	FragTrap::Name = Other.name + "_clap_name";
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap deconstructor called" << std::endl;
}
