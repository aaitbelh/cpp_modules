/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:37:34 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/31 22:27:25 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie newEelement;
	if(name.empty())
	{
		std::cout << "error empty input" << std::endl;
		exit(1);
	}
	newEelement.setnameOfZombie(name);
	newEelement.announce();
}