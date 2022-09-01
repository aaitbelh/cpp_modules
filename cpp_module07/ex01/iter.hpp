/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:38:31 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/09/01 10:41:40 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>


template <typename T> void iter(T *ptr, const int len, void f(T const &))
{
  for(int i = 0 ; i < len; ++i)
  {
    f(ptr[i]);
  }
}


#endif