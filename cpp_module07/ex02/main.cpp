/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:07:40 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/31 20:34:37 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int foo()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = 1 + rand() % 100;
        numbers[i] = value;
        mirror[i] = value;
    }
	//SCOPE
	{
		Array<int> tmp = numbers;
		std::cout << numbers.size() << std::endl;
		std::cout << tmp.size() << std::endl;
		Array<int> test(tmp);
		for(int i = 0 ; i < 750; ++i)
		{
			std::cout << tmp[i] << " ";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
		return (0);
}

int main()
{
	foo();
	system("leaks array");
}