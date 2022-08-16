/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:58:17 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/14 12:36:16 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"
class Cat : public Animal{
	private:
		class Brain *Brain;
	public:
		Cat();
		Cat(Cat &Other);
		Cat& operator=(Cat &Other);
		void makeSound()const;
		~Cat();
};

#endif