/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 22:24:27 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/09/02 09:40:53 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stack>
int main()
{
	Span sp = Span(6);
	sp.addNumber(-6);
	sp.addNumber(-5);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	int tab[] = {1, 4, 100, 101, 70, 51};
	Span test(sizeof(tab) / 4);
	test.addRange(&tab[0], tab + (sizeof(tab) / 4));
	std::cout << test.shortestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}