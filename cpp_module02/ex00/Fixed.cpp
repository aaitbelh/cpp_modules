/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:26:31 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/31 19:38:02 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


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