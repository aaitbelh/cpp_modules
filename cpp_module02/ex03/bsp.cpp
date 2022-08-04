/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:51:38 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/03 21:11:20 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed calculate_Surface( Point const a, Point const b, Point const c)
{
	Fixed ab = (a.getX() - b.getX()) * ( a.getY() - c.getY());
	Fixed ac = (a.getY() - b.getY()) * (a.getX() - c.getX());
	Fixed s = Fixed(0.5f) * (ab - ac);
	if(s.toFloat() < 0)	
		s = s * -1;
	return s;
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	Fixed s = calculate_Surface(a, b, c);
	Fixed s1 = calculate_Surface(a, b, p);
	Fixed s2 = calculate_Surface(a, p, c);
	Fixed s3 = calculate_Surface(p, b, c);
	Fixed sum = s1 + s2 + s3;
	if(sum != s || s1 == 0 || s2 == 0 || s3 == 0)
		return (0);
	return (1);
}


