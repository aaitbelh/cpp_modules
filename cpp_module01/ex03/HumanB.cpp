/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:35:56 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/20 19:22:23 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon gun)
{
	this->gun = gun;
}

HumanB::~HumanB()
{
	
}
void HumanB::attack()
{
	std::cout << name << " attacks with their " << gun.getType() << std::endl;
}