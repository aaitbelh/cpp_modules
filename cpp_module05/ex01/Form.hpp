/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:54:47 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/22 18:33:25 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;

class GradeTooHighExceptions : public std::exception
{
	public:
		const char* what() const throw();
};

class GradeTooLowExceptions : public std::exception
{
	public:
		const char* what() const throw();
};

class Form
{
	private:
		std::string const name;
		bool signe;
		int const Grade;
		int const execute;
	public:
		class GradeTooHighExceptions GradeTooHighExceptions;
		class GradeTooLowExceptions GradeTooLowExceptions;
		Form();
		Form(std::string name, int Grade, int execute);
		std::string const getName()const;
		int getSigne()const;
		int getGrade()const;
		int getExec()const;
		Form(Form &Other);
		void beSigned(Bureaucrat &Bureaucrat);
		Form& operator=(Form &Other);
		~Form();	
};

std::ostream& operator<<(std::ostream& out, Form form);
#endif