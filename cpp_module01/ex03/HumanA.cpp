/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:25:06 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/20 19:49:27 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon gun){
	this->gun = &gun;
	this->name = name;	
}


void HumanA::attack()
{
	std::cout << name << " attacks with their " << gun->getType() << std::endl;
}

HumanA::~HumanA()
{
	
}