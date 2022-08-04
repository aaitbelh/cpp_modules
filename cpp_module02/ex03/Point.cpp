/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:51:51 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/03 10:25:35 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
Point::Point():x(0),y(0){
}

Point::Point(const float x, const float y):x(x),y(y){
}

Point::Point(Point const &Other):x(Other.x),y(Other.y){
}

Point::~Point(){
	
}

Point& Point::operator=(Point& o){
	const_cast<Fixed&>(x) = o.x;
	return (*this); 
}

Fixed const Point::getX()const{
	return (this->x);
}
Fixed const Point::getY()const{
	return (this->y);
}