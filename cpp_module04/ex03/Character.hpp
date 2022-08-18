/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:02:46 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/18 16:23:03 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria  *OwnMateria[4];
		int size;
	public:
		Character();
		Characte(std::string name);
		Character(Character &Other);
		Character& operator=(Character &Other);	
		clear();
		std::string const & getName();
		void equip(AMateria* m);
		void unequip(int idx);
		~Character();		
};

#endif