/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:03:41 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/09/01 21:52:53 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <stack>

template<typename T> 
class MutantStack : public std::stack<T>
{
	
	public:
		typedef	typename std::stack<T>::container_type::iterator	iterator;
		MutantStack()
		{
		}

		MutantStack(MutantStack &Other)
		{
			*this = Other;
		}
		MutantStack& operator=(MutantStack &Other)
		{
			this->c = Other.c;
			return *this;
		}
		~MutantStack()
		{
			
		}
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
};
#endif
