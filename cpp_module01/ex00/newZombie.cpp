/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:23:20 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/19 21:42:29 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setnameOfZombie(std::string name){
	this->name = name;
}

Zombie::Zombie(){
	std::cout << "Zombie: " << name << " is created" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie: " << name << " is destroyed" << std::endl;
}

Zombie* newZombie( std::string name ){
	Zombie *newElement;
	newElement = new Zombie;
	newElement->setnameOfZombie(name);
	return (newElement);
}
int main()
{
	Zombie *L;
	L = newZombie("grboz");
	std::cout << L->gettername() << std::endl;
	randomChump("Grabz");
	delete L;
}