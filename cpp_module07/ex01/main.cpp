/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:38:28 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/30 11:24:57 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

template<typename T> void ADD1(T &value)
{
	value += 10;
}

int main()
{
	int array[5] = {1,2,3,4,5};
	iter(&array[0],5, ADD1<int &>);
	for(int i = 0; i < (int)(sizeof(array) / sizeof(array[0])); ++i)
		std::cout << array[i] << std::endl;
}