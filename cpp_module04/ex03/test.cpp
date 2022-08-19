/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:46:16 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/19 21:53:22 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
	char *ptr[4];
	char str[10] = "HELLO";
	str[5] = 0;
	ptr[1] = &str[0]; 
	for(int i =0 ; i < 4; i++)
	{
		if(!ptr[i])
			std::cout << "null" << std::endl;
		else
			std::cout << ptr[i] << std::endl;
	}
}