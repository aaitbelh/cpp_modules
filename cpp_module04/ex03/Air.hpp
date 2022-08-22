/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Air.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:50:28 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/20 11:02:26 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AIR_HPP
#define AIR_HPP

#include "AMateria.hpp"

class Air : public AMateria
{
	public:
		Air();
		Air(Air &Other);
		Air& operator=(Air &Other);
		AMateria *clone()const;
		void use(ICharacter& target);
		~Air();
};

#endif