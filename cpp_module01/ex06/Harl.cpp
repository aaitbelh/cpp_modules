/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casper <casper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:43:55 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/25 10:11:03 by casper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int	getIndex = -1;
	std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if(level == tab[i])
		{
			getIndex = i;
			break;
		}
	}
	switch(getIndex)
	{
		case 0:std::cout << "[ " <<tab[0] << " ]" << std::endl; debug();std::cout << std::endl;
		case 1:std::cout << "[ " << tab[1] << " ]" << std::endl; info();std::cout << std::endl;
		case 2:std::cout << "[ " <<tab[2] << " ]" <<std::endl; warning();std::cout << std::endl;
		case 3:std::cout << "[ " << tab[3] << " ]" <<std::endl; error();std::cout << std::endl;
			break;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
