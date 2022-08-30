/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:40:05 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/29 21:31:37 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T> void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}
template<typename T> T min(T &a, T &b)
{
	if(a < b)
		return (a);
	else 
		return (b);
}
template<typename T> T max(T &a, T &b)
{
	if(a > b)
		return (a);
	else 
		return (b);
}

#endif