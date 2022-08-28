/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:58:27 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/28 13:09:06 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTION_HPP
#define CONVERTION_HPP

#include <iostream>
#include <string>

class convertion
{
	private:
		std::string _input;
		std::string _type;
	public:
		int type;
		void ToChar(int	c);
		void ToInt(std::string str);
		void ToDouble(std::string str);
		void ToFloat(std::string str);
		void setType(int _type);
};


#endif