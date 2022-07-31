/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:31:23 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/31 21:22:18 by aaitbelh         ###   ########.fr       */
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
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(const int raw);
		float	toFloat() const;
		int		toInt() const;
		
};

std::ostream& operator<<(std::ostream &out, Fixed const &c);

#endif