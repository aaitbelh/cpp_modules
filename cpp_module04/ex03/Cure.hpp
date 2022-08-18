/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:58:28 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/18 14:02:01 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(const std::string& type);
		Ice(Ice &Other);
		Ice& operator=(Ice &Other);
		~Ice();
		AMateria* clone()const;
};

#endif