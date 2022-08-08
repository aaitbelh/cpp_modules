/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:22:29 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/05 18:17:31 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
const Fixed& 	Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

/******************operators overloading*************************/
//postfix operator I
Fixed	Fixed::operator++(int)
{
	Fixed tmpObject;
	tmpObject.FpValue = this->FpValue;
	this->FpValue++;
	return (tmpObject);
}

//prefeix operator I
Fixed&		Fixed::operator++()
{
	this->FpValue++;
	return (*this);
}

//postfix operator D

Fixed Fixed::operator--(int)
{
	Fixed tmpObject;
	tmpObject.FpValue = this->FpValue;
	this->FpValue--;
	return (tmpObject);
}

//prefeix operator D
Fixed&		Fixed::operator--()
{
	this->FpValue--;
	return (*this);
}

Fixed	Fixed::operator/(Fixed const &c1)
{
	Fixed tmp;
	tmp.FpValue = (this->FpValue / (float)c1.FpValue) * (1 << this->BitFractional);
	return (tmp);
}
Fixed	Fixed::operator*(Fixed const &c1)
{
	Fixed tmp;
	tmp.FpValue = (this->FpValue * c1.FpValue) >> 8;
	return (tmp);
}

Fixed	Fixed::operator+(Fixed const &c1)
{
	Fixed tmp;
	tmp.FpValue = this->FpValue + c1.FpValue;
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const &c1)const
{
	Fixed tmp;
	tmp.FpValue = this->FpValue - c1.FpValue;
	return (tmp);
}

bool	Fixed::operator>(Fixed const &c1)
{
	return (this->getRawBits() > c1.FpValue ? 1 : 0);
}

bool	Fixed::operator<(Fixed const &c1)
{
		return (this->FpValue < c1.FpValue ? 1 : 0);
}

bool	Fixed::operator>=(Fixed const &c1)
{
	return (this->FpValue >= c1.FpValue ? 1 : 0);
}

bool	Fixed::operator<=(Fixed const &c1)
{
	return (this->FpValue <= c1.FpValue ? 1 : 0);
}

bool	Fixed::operator==(Fixed const &c1)
{
	return (this->FpValue == c1.FpValue ? 1 : 0);
}

bool	Fixed::operator!=(Fixed const &c1)
{
	return (this->FpValue != c1.FpValue ? 1 : 0);
}

std::ostream& operator<<(std::ostream &out, Fixed const &c)
{
	out<<c.toFloat();
	return (out);
}

/****************************constractors**************************/
Fixed::Fixed()
{
	FpValue = 0;
}

Fixed::Fixed(const int value)
{
	FpValue = value << this->BitFractional;
}
Fixed::Fixed(const float value)
{
	FpValue = roundf(value * float(1 << this->BitFractional));
}

Fixed::Fixed(Fixed const &Oldclass)
{
	*this = Oldclass;
}
Fixed& Fixed::operator= (Fixed const &NewFixed)
{
	this->FpValue = NewFixed.getRawBits();
	return  *this;
}
Fixed::~Fixed()
{
}

/***************************methodes************************/

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