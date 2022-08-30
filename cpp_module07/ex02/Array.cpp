/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:47:51 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/30 23:05:48 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array(){
	Type = nullptr;
}

Array::Array(std::size_t n)
{
	Type = new T[n];
	this->_size = n;
}

Array::~Array()
{
	if(_size != 0)
		delete [] Type;
}

Array<int>;