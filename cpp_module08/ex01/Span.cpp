/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casper <casper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:14:46 by casper            #+#    #+#             */
/*   Updated: 2022/08/31 12:20:20 by casper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned  int N):N(N)
{
    
}

Span::Span(Span &Other)
{
    *this = Other;
}

Span& Span::operator=(Span &Other)
{
    this->array = Other.array;
    this->N = Other.N;
    return *this;
}

void Span::addNumber(int n)
{
    try
    {
        if(this->array.size() + 1 < this->N)
           this->array.push_back(n);
        else
            throw(std::runtime_error("Array is full"));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 
}

