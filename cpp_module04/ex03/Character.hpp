/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:02:46 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/19 21:52:24 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>
class AMateria;

typedef struct s_lst
{
	AMateria *ptr;
	struct s_lst *next;
}t_lst;

class Character: public ICharacter
{
	private:
		t_lst *HeadOfMemory;
		std::string name;
		AMateria  *OwnMateria[4];
		int size;
	public:
		Character();
		Character(std::string name);
		Character(Character &Other);
		Character& operator=(Character &Other);	
		std::string const & getName()const;
		void addNewMemory(AMateria *ptr);
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void clear_all();
		~Character();		
};

#endif