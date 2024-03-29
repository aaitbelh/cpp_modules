/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:06:08 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/25 19:21:08 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::ostream& operator<<(std::ostream& out, Form form)
{
	out << form.getName() << " form, " << form.getGrade()
	 << " Form Grad" << form.getExec() << " Form execute" << "Signed:" 
	 << std::boolalpha << form.getSigne() << ".";
	return (out); 
}

const char* GradeTooLowExceptions::what() const throw()
{
	return ("Grade too Low");
}

const char* GradeTooHighExceptions::what() const throw()
{
	return ("Grade too High");
}

Form::Form():name("_NONAMESET"),signe(0),Grade(150),execute(150){
}
Form::Form(std::string name, int Grade, int execute)
:name(name),signe(0),Grade(Grade),execute(execute){
	if(Grade < 1)
		throw(GradeTooHighExceptions);
	if(Grade > 150)
		throw(GradeTooLowExceptions);
}

Form::Form(Form &Other):name("_NONAMESET"),signe(0),Grade(150),execute(150)
{
	*this = Other;
}
Form& Form::operator=(Form& Other)
{	
	this->signe = Other.getSigne();
	return *this;
}

int Form::getSigne()const{
	return (this->signe);
}
int Form::getExec()const 
{
	return this->execute;
}
int Form::getGrade()const{
	return this->Grade;
}
std::string const Form::getName()const
{
	return (this->name);
}

void Form::beSigned(Bureaucrat const &Bureaucrat)
{
	if(Bureaucrat.getGrade() <= this->getGrade())
		this->signe = 1;
	else
		throw(Form::GradeTooLowExceptions);
}
Form::~Form()
{
	
}
