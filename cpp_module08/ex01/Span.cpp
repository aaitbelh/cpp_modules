/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:14:46 by casper            #+#    #+#             */
/*   Updated: 2022/09/02 08:44:15 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned const int N):N(N)
{
}

Span::Span(Span const &Other)
{
    *this = Other;
}

Span& Span::operator=(Span const &Other)
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
            if(minDiff > abs(array[i] - array[i - 1]))
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


void Span::addRange(int *begin, int *end)
{
    for(; begin < end; ++begin)
        this->addNumber(*begin);
}

int Span::longestSpan()
{
    try
    {
        if (this->array.size() <= 1)
            throw(std::runtime_error("not enough element"));
        int max = *std::max_element(this->array.begin(), this->array.end());
        int min = *std::min_element(this->array.begin(), this->array.end());
        return (max - min);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return(-1);
    
}