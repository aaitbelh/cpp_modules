/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:27:01 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/05 18:15:06 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
	private:
		int	FpValue;
		static const int BitFractional = 8;
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(Fixed const &Oldclass);
		Fixed	&operator= (Fixed const &NewFixed);
		bool	operator>(Fixed const &c1);
		bool	operator>=(Fixed const &c1);
		bool	operator<(Fixed const &c1);
		bool	operator<=(Fixed const &c1);
		bool	operator==(Fixed const &c1);
		bool	operator!=(Fixed const &c1);
		Fixed	operator+(Fixed const &c1);
		Fixed	operator-(Fixed const &c1)const;
		Fixed	operator*(Fixed const &c1);
		Fixed	operator/(Fixed const &c1);
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		static const Fixed& max(Fixed const &a, Fixed const &b);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(const int raw);
		float	toFloat() const;
		int		toInt() const;
		
};

std::ostream& operator<<(std::ostream &out, Fixed const &c);
#endif
