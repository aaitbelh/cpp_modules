/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:58:17 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/15 16:38:14 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"
#include "WrongAnimal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(Cat &Other);
		Cat& operator=(Cat &Other);
		void makeSound()const;
		~Cat();
};

#endif