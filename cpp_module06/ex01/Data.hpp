/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:05:55 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/29 15:56:37 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
struct Data
{
	char a;
};

struct data2 : public Data
{
	
};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif