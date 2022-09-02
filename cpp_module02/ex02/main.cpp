/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:39:02 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/09/01 14:16:28 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
int main( void ) {
	Fixed a = Fixed(1);
	Fixed b(1.3f);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << b << std::endl;
	std::cout << a << std::endl;
	std::cout << (a >= b) << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}