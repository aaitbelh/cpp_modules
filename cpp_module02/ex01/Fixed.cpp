/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:31:21 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/08 17:00:08 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream &out, Fixed const &c)
{
	out<<c.toFloat();
	return (out);
}

Fixed::Fixed()
{
	FpValue = 0;
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	FpValue = value << this->BitFractional;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	FpValue = roundf(value * (1 << this->BitFractional));
}

Fixed::Fixed(Fixed const &Oldclass)
{
	std::cout << "copy constructor called" << std::endl;
	*this = Oldclass;
}
Fixed& Fixed::operator= (Fixed const &NewFixed)
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
	return this->FpValue;
}

void Fixed::setRawBits(const int raw)
{
	this->FpValue = raw;
}

float Fixed::toFloat(void)const
{
	return (this->FpValue / (float)(1 << this->BitFractional));
}

int	Fixed::toInt()const
{
	return (this->FpValue >> this->BitFractional);
}
