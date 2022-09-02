/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:00:54 by casper            #+#    #+#             */
/*   Updated: 2022/09/01 14:46:36 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
class Span
{
    private:
        unsigned int N;
        std::vector<int> array;
    public:
        Span(unsigned const int n);
        Span(Span const &Other);
        Span& operator=(Span const &Other);
        int shortestSpan();
        int longestSpan();
        void addNumber(int n);
        void addRange(int *begin, int *end);
        ~Span() {};
};

#endif