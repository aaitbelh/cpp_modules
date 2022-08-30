/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:29:10 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/30 23:06:06 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <string>
#include <iostream>


template<typename T> class Array
{
	private:
		T *Type;
		std::size_t Size;
	public:
		Array();
		Array(std::size_t n);
		Array(Array &Other);
		Array& operator=(Array &Other);
		~Array();
};


#endif