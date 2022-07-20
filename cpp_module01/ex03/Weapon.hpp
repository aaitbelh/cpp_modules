/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:55:53 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/20 19:26:40 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
class Weapon{
	public:
		const	std::string &getType();
		void	setType(std::string type);
		Weapon(std::string type);
		Weapon()
		{
			
		}
		~Weapon();
	private:
		std::string type;
};

#endif 