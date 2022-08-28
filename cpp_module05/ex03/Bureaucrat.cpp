/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:22:28 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/26 10:34:29 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " can not executed " << form.getName() << std::endl;
		throw;
	}
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because ";
		throw ;
	}
}

const char* GradeTooLowException::what() const throw()
{
	return ("Grade too Low");
}

const char* GradeTooHighException::what() const throw()
{
	return ("Grade too High");
}

void Bureaucrat::Decrement()
{
	if(Grade >= 150)
		throw (this->GradeTooLowException);
	++Grade;
}

void Bureaucrat::Increment()
{
	if(Grade <= 1)
		throw(this->GradeTooHighException);
	--Grade;
}


std::string const Bureaucrat::getName()
{
	return (this->name);
}

int Bureaucrat::getGrade()const
{
	return (this->Grade);
}


Bureaucrat::Bureaucrat():name("NONAME_SET"), Grade(150){
}

Bureaucrat::Bureaucrat(std::string const name, int Grade):name(name), Grade(Grade){	
	if(Grade < 1)
	{
		throw(this->GradeTooHighException);
	}
	if(Grade > 150)
		throw(this->GradeTooLowException);
}

Bureaucrat::Bureaucrat(Bureaucrat &Other)
{
	*this = Other;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &Other)
{
	std::string *tmp;
	tmp = const_cast<std::string*>(&name);
	*tmp = Other.getName();
	this->Grade = Other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(){	
}

std::ostream & operator<<(std::ostream &out, Bureaucrat bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " 
	<< bureaucrat.getGrade() << " .";
	return (out);
}