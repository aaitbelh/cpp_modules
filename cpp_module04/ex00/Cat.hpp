/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:29:43 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/07 19:54:21 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "WrongAnimal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat &Other);
		Cat& operator=(Cat &Other);
		~Cat();
		void makeSound()const;
};
#endif