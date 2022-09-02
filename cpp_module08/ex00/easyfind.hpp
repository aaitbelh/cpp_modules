/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:57:53 by casper            #+#    #+#             */
/*   Updated: 2022/09/02 09:34:44 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template<class T>
void easyfind(T &a, const int b)
{
    try
    {
    
        typename T::iterator t;
        t = std::find(a.begin(), a.end(), b);
        if(t != a.end())    
            std::cout << "element founded" << std::endl;
        else
            throw (std::runtime_error("element not found"));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}


#endif