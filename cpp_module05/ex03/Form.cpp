/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:06:08 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/26 10:34:16 by aaitbelh         ###   ########.fr       */
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

Form::Form():name("NOTSET"),signe(0),Grade(150),Execute(150){
	if(Grade < 1)
		throw(GradeTooHighExceptions);
	if(Grade > 150)
		throw(GradeTooLowExceptions);
}
Form::Form(std::string name, int Grade, int execute)
:name(name),signe(0),Grade(Grade),Execute(execute){
	if(Grade < 1)
		throw(GradeTooHighExceptions);
	if(Grade > 150)
		throw(GradeTooLowExceptions);
}

Form::Form(Form &Other):Grade(150),Execute(150)
{
	*this = Other;
}
Form& Form::operator=(Form& Other)
{	
	*(const_cast<int*>(&Grade)) = Other.getGrade();
	const_cast<std::string&>(name) = Other.getName();
	this->signe = Other.getSigne();
	*(const_cast<int*>(&Execute)) = Other.getExec();
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
