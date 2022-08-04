/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casper <casper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:40:24 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/04 11:13:30 by casper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Kira;
	Kira.attack("L");
	ClapTrap L;
	L = Kira;
	L.attack("missa");
	ClapTrap Missa(L);
	Missa.attack("him self");
}