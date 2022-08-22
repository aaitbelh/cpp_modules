/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:46:56 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/20 11:40:20 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Air.hpp"



void f()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Air());
	ICharacter* me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("air");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	// me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	delete bob;
	delete me;
	delete src;
}
int main()
{
	f();
	system("leaks interface");
	return 0;
}