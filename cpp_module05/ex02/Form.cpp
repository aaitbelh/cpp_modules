/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:06:08 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/25 19:23:35 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* FormNotSigned::what()const throw()
{
	return ("FORM NOT SIGNED :)");
}

std::ostream& operator<<(std::ostream& out, Form& form)
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

Form::Form():name("NONAMESET"),signe(0),Grade(150),Execute(150){
}
Form::Form(std::string name, int Grade, int execute)
:name(name),signe(0),Grade(Grade),Execute(execute){
	if(Grade < 1)
		throw(GradeTooHighExceptions);
	if(Grade > 150)
		throw(GradeTooLowExceptions);
}

Form::Form(Form &Other):name("NONAMESET"),signe(0),Grade(150),Execute(150)
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
	return this->Execute;
}
int Form::getGrade()const{
	return this->Grade;
}
std::string const Form::getName()const
{
	return (this->name);
}

void Form::beSigned(Bureaucrat Bureaucrat)
{
	if(Bureaucrat.getGrade() <= this->getGrade())
		this->signe = 1;
	else
		throw (this->GradeTooLowExceptions);
}
Form::~Form()
{
	
}
