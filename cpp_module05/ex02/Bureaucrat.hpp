/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:26 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/23 17:44:51 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"
class Form;
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
		class GradeTooHighException	GradeTooHighException;
		class GradeTooLowException	GradeTooLowException;
		Bureaucrat();
		Bureaucrat(std::string const name, int Grade);
		Bureaucrat(Bureaucrat &Other);
		Bureaucrat& operator=(Bureaucrat &Other);
		void Increment();
		void Decrement();
		void signForm(Form& form);
		~Bureaucrat();
		std::string const getName();
		int getGrade()const;
};

std::ostream & operator<<(std::ostream &out, Bureaucrat bureaucrat);

#endif 