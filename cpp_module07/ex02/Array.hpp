/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casper <casper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:29:10 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/31 15:22:16 by casper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <string>
#include <iostream>
#include <exception>


template<typename T> class Array
{
	private:
		T *Type;
		std::size_t _Size;
	public:
		Array()
		{
			this->Type = NULL;
			_Size = 0;
		}
		Array(std::size_t n)
		{
			Type = 	new T[n];
			this->_Size = n;
		}
		T& getIndex(int index)
		{
			return (this->Type[index]);
		}
		T& operator[](int index)
		{
			if(index < 0)
				throw(std::overflow_error("ERROR: OVERFLOW"));
			else if(index >= this->size())
				throw(std::domain_error("ERROR: UNDERFLOW"));
			else
				return (this->Type[index]);
			return (*Type);
		}
		int size()
		{
			return this->_Size;
		}
		Array(Array &Other)
		{
			this->Type = new T[Other.size()];
			this->_Size = Other.size();
			for(int i = 0; i < Other.size(); ++i)
			{
				this->Type[i] = Other[i];
			}
		}
		Array& operator=(Array &Other)
		{
			std::cout << "operator called here" << std::endl;
			if(this->size())
				delete [] this->Type;
			for(int i = 0 ;i < Other.size(); ++i)
				this->Type[i] = Other[i];
			return (*this);
		}
		~Array(){
			if(this->size())
				delete [] this->Type;
		};
};


#endif