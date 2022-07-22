/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:54:37 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/21 20:59:42 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>



int main(int ac, char **av)
{

	if(ac != 4)
	{
		std::cerr << "ERROR IN ARGUMENTS" << std::endl;
		exit(0); 
	}
	std::string nameOfFile = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ofstream Newfile(nameOfFile.append(".replace"));
	std::find(s1)
}