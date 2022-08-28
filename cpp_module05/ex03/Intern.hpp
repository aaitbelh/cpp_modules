/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:56:23 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/25 11:39:13 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class NoFormFoundexception : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("No Form compatible with this target");
		}
};

class Intern
{
	public:
	Intern() {} ;
	class NoFormFoundexception NoFormFoundexception;
	Intern(Intern &Other) {(void)Other; } ;
	void operator=(Intern &Other) {(void)Other;};
	~Intern() {};
	Form* makeForm(std::string Formname, std::string target);
};

#endif