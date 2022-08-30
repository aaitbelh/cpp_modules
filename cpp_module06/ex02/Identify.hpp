/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:55:03 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/29 16:17:05 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP
#include <cmath>
#include <iostream>

class Base
{
	public:
		Base(){};
		virtual ~Base(){};
};

class A : public Base
{
	public:
		A(){};
		~A(){};
};

class B : public Base
{
	public:
		B(){};
		~B(){};
};

class C : public Base
{
	public:
		C(){};
		~C(){};
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif