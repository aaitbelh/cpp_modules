/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:32:59 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/15 16:38:19 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "WrongAnimal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog& Other);
		Dog& operator=(Dog &Other);
		~Dog();
		void makeSound()const;
};

#endif