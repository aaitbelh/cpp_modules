/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casper <casper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:22:28 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/24 12:02:16 by casper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


void Bureaucrat::executeForm(Form const & form)
{
	if(getGrade() <= form.getExec())
		std::cout << this->name << " executed " << form.getName() << std::endl;
	else
		std::cout << this->name << " can not executed " << form.getName() << std::endl;
}

void Bureaucrat::signForm(Form &form)
{
	if(getGrade() <= form.getGrade())
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	else
	{
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because ";
		if(this->getGrade() > form.getGrade())
			std::cout << "Grade is too Low" << std::endl;
		else if(this->getGrade() < 1)
			std::cout << "Grade is too High" << std::endl;
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


Bureaucrat::Bureaucrat():name("NONAME_SET"), Grade(0){
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