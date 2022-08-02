/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:51:35 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/02 12:38:21 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class A
{
	private:
		int a;
	public:
		A(){}
		A(int a)
		{
			std::cout << "im b and i get here\n" << std::endl;
			this->a = a;
		}
		A& operator*(A const &c)
		{
			this->a = this->a * c.a;
			return (*this);
		}
		A(A &New)
		{
			std::cout << "copy  constructor is called" << std::endl;
			this->a = New.a;
		}
		int getA(){
			return (a);
		}
		void setA(int a)
		{
			this->a = a;
		}
		int operator++(int);
		int operator++();
};



std::ostream& operator<<(std::ostream &out, A &c)
{
	out << c.getA();
	return (out);
}
int A::operator++(int a)
{
	std::cout << "im the postfix" << std::endl;
	return this->a++;
}

int A::operator++()
{
	std::cout << "im the prefexi operator" << std::endl;
	return (++a);
}
int test(int a)
{
	return(++a);
}
int main()
{
	int a = (1 * (1 << 8));
	std::cout << (float)(a / float(1 >> 8)) << std::endl;
}