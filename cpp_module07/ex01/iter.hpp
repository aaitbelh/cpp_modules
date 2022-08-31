/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casper <casper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:38:31 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/31 10:19:04 by casper           ###   ########.fr       */
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