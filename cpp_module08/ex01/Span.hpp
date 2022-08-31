/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casper <casper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:00:54 by casper            #+#    #+#             */
/*   Updated: 2022/08/31 12:17:29 by casper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
class Span
{
    private:
        unsigned int N;
        std::vector<int> array;
    public:
        Span():N(0) {};
        Span(unsigned int n);
        Span(Span &Other);
        Span& operator=(Span &Other);
        void addNumber(int n);
        Span();
};

#endif