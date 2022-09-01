/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:14:46 by casper            #+#    #+#             */
/*   Updated: 2022/08/31 22:26:33 by aaitbelh         ###   ########.fr       */
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
        if(this->array.size() < this->N)
           this->array.push_back(n);
        else
            throw(std::runtime_error("Array is full"));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    } 
}


int Span::shortestSpan()
{
    try
    {
        if(this->array.size() <= 1)
            throw(std::runtime_error("not enough element"));
        std::vector<int>tmp(this->array);
        std::sort(tmp.begin(), tmp.end());
        int minDiff = abs(array[0] - array[1]);
        for(int i = 2; i < (int)tmp.size(); ++i)
        {
            if(minDiff < abs(array[i] - array[i - 1]))
                minDiff = abs(array[i] - array[i - 1]);
        }
        return(minDiff);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(-1);
}

int Span::longestSpan()
{
    try
    {
        if (this->array.size() <= 1)
            throw(std::runtime_error("not enough element"));
        return (std::max(this->array.begin(), this->array.end()) - std::min(this->array.begin(), this->array.end()));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return(-1);
    
}