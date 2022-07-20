/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:01:22 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/20 19:16:53 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon gun;
		std::string name;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon club);
};

#endif