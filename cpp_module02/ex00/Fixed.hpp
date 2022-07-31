/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:15:23 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/31 19:37:16 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	FpValue;
		static const int BitFractional = 8;
	public:
		Fixed();
		Fixed(Fixed &Oldclass);
		Fixed	&operator= (Fixed &NewFixed);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(const int raw);
		
};

#endif