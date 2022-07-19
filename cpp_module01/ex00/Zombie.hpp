/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:19:24 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/19 21:38:13 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <new>

class Zombie
{
	public:
		void setnameOfZombie(std::string name);
		void announce( void );
		std::string gettername(){
			return name;
		}
		Zombie();
		~Zombie();
	private:
		std::string name;
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif