/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:26 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/22 14:30:06 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

class GradeTooHighException : public std::exception
{
	public:
		const char* what() const throw();
};

class GradeTooLowException : public std::exception
{
	public:
		const char* what() const throw();
};

class Bureaucrat
{
	private:
		std::string const name;
		int Grade;
	public:
		class GradeTooHighException GradeTooHighException;
		class GradeTooLowException GradeTooLowException;
		Bureaucrat();
		Bureaucrat(std::string const name, int Grade);
		Bureaucrat(Bureaucrat &Other);
		Bureaucrat& operator=(Bureaucrat &Other);
		void Increment();
		void Decrement();
		~Bureaucrat();
		std::string const getName();
		int getGrade();
};

std::ostream & operator<<(std::ostream &out, Bureaucrat bureaucrat);

#endif 