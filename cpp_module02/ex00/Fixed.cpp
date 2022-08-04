/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:26:31 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/04 08:40:51 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// static int i = 0;
Fixed::Fixed()
{
	FpValue = 0;
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &Oldclass)
{
	std::cout << "copy constructor called" << std::endl;
	*this = Oldclass;
}
Fixed& Fixed::operator= (Fixed &NewFixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->FpValue = NewFixed.getRawBits();
	return  *this;
}
Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}


int Fixed::getRawBits(void)const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->FpValue;
}

void Fixed::setRawBits(const int raw)
{
	this->FpValue = raw;	
}