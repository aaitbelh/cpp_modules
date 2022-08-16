/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:55:51 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/16 11:35:13 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"

void f()
{
	Animal *d[20];
	for(int i = 0; i < 10; i++)
	{
		if(i < 5)
			d[i] = new Dog();
		else
			d[i] = new Cat();
	}
	// for(int i = 0; i < 10; i++)
	// 	delete d[i];
}
int main()
{
	f();
	system("leaks Abstract");
}