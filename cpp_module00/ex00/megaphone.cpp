/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:03:02 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/23 14:29:47 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int main(int ac , char **av)
{
	int i = 1;
	if(ac == 1)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	else{
		while(av[i])
		{
			while(*av[i])
			{
				std::cout << (char)toupper(*av[i]);
				av[i]++;
			}
			i++;
		}
	}
}