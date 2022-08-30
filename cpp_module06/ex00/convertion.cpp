/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:01:33 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/28 19:16:00 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convertion.hpp"


int _CheckType(std::string var)
{
	char *end = NULL;
	std::strtod(var.c_str(), &end);
	if(var == "nan" || var == "+inf" || var == "-inf")
		return (NANINF);
	if(end[0] == '\0' && (int)var.find(".") == -1)
		return (INT);
	else if(end[0] == '\0')
		return (DOUBLE);
	else if(std::string(end) == "f")
		return (FLOAT);
	else if(var.size() == 1 && std::isprint(var[0]))
		return (CHAR);
	return (0);
}

void _ischar(char c)
{
	std::cout << "char: \'" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(c) << 'f' << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<float>(c) << std::endl;
}

void _isint(int num)
{
	if(std::isprint(num))
		std::cout << "char: \'" << static_cast<char>(num) << "\'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(num) << 'f' << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<float>(num) << std::endl;
}

void _isfloat(float num)
{
	if(std::isprint(num))
		std::cout << "char: \'" << static_cast<char>(num) << "\'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if(num > INT_MAX || num < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: "<< static_cast<int>(num) << std::endl;
	float tmp = static_cast<int>(num);
	if(tmp - num == 0)
		std::cout << "float: " << std::setprecision(1) << std::fixed << num << 'f' << std::endl;
	else
		std::cout << "float: " << num << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void _isdouble(double num)
{
	if(std::isprint(num))
		std::cout << "char: \'" << static_cast<char>(num) << "\'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if(num > INT_MAX || num < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	float tmp = static_cast<int>(num);
	if(tmp - num == 0)
		std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(num) << 'f' << std::endl;
	else
		std::cout << "float: " << static_cast<float>(num) << 'f' << std::endl;
	std::cout << "double: " << num << std::endl;
}

void 	Processing(std::string var)
{
	int type = _CheckType(var);
	if(type == 0){
		std::cerr << "ERROR:" << std::endl;
		return ;
	}
	if(type == CHAR)
		_ischar(var[0]);
	else if(type == INT)
		_isint(std::atoi(var.c_str()));
	else if(type == FLOAT)
		_isfloat(std::atof(var.c_str()));
	else if(type == DOUBLE)
		_isdouble(std::strtod(var.c_str(), 0));
}