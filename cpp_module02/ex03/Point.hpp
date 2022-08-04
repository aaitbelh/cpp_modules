/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:38:03 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/03 21:10:00 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float x, const float y);
		Point(Point const &Other);
		~Point();
		Point& operator=(Point& o);
		Fixed const getX()const;
		Fixed const getY()const;
};

bool bsp( Point const a, Point const b, Point const c, Point const p);
#endif