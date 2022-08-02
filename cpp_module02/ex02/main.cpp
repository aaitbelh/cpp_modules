/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:39:02 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/02 14:37:33 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
int main( void ) {
	Fixed a(300);
	Fixed const b( Fixed( 5.05f ) - Fixed( 2 ) );
	// std::cout << b << std::endl;
	std::cout << (a >= b) << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}