/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:58:27 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/28 19:10:27 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTION_HPP
#define CONVERTION_HPP

#include <iostream> 
#include <cctype>
#include <string>
#include <iomanip>
#include "convertion.hpp"
#include <cmath>
#include <climits>

#define DEFAULT 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define NANINF 4
#define CHAR 5

void 	Processing(std::string var);
void _isdouble(double num);
void _isfloat(float num);
void _isint(int num);
void _ischar(char c);
int _CheckType(std::string var);
#endif