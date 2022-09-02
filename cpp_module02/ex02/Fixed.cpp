/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:22:29 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/09/01 14:17:25 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
const Fixed& 	Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

/******************operators overloading*************************/
//postfix operator
Fixed	Fixed::operator++(int)
{
	Fixed tmpObject;
	tmpObject.FpValue = this->FpValue;
	this->FpValue++;
	return (tmpObject);
}

//prefeix operator
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
	tmp.FpValue = (this->FpValue / c1.FpValue) * (1 << this->BitFractional);
	return (tmp);
}
Fixed	Fixed::operator*(Fixed const &c1)
{
	Fixed tmp;
	tmp.FpValue = (this->FpValue * c1.FpValue) >> this->BitFractional;
	return (tmp);
}

Fixed	Fixed::operator+(Fixed const &c1)
{
	Fixed tmp;
	tmp.FpValue = this->FpValue + c1.FpValue;
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const &c1)
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
	FpValue = roundf(value * float(1 << this->BitFractional));
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