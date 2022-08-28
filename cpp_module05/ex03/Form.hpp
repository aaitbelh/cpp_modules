/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:54:47 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/25 17:02:49 by aaitbelh         ###   ########.fr       */
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


class FormNotSigned : public std::exception
{
	public:
		const char *what() const throw();
};

class Form
{
	private:
		std::string const name;
		bool signe;
		int const Grade;
		int const Execute;
	public:
		class GradeTooHighExceptions GradeTooHighExceptions;
		class GradeTooLowExceptions GradeTooLowExceptions;
		class FormNotSigned FormNotSigned;
		Form();
		Form(std::string name, int Grade, int execute);
		std::string const getName()const;
		int getSigne()const;
		int getGrade()const;
		int getExec()const;
		Form(Form &Other);
		void beSigned(Bureaucrat Bureaucrat);
		Form& operator=(Form &Other);
		virtual void execute(Bureaucrat const & executor)const = 0;
		virtual ~Form();	
};

std::ostream& operator<<(std::ostream& out, Form& form);
#endif