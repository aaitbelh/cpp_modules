/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:53:15 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/04 14:42:15 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string Name;
		int HitPoint;
		int EnergyPoint;
		int AttackDamage;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &other);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap &c);
};

#endif