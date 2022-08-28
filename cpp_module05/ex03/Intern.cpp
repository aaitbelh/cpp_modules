/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:04:28 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/26 09:55:22 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form* Intern::makeForm(std::string Formname, std::string target)
{
	int index = -1;
	std::string tab[3] = {"PresidentialPardonForm", "RobotomyRequestForm","ShrubberyCreationForm"};
	index = ((Formname == tab[0]) * 0 + (Formname == tab[1]) * 1 + (Formname == tab[2]) * 2);
	if(index == 0 && Formname != tab[0])
		index = -1;
	switch (index)
	{
	case 0:
		std::cout << "Intern creates " << tab[index] << std::endl;
		return (new PresidentialPardonForm(target));
	case 1:
		std::cout << "Intern creates " << tab[index] << std::endl;
		return (new RobotomyRequestForm(target));
	case 2:
		std::cout << "Intern creates " << tab[index] << std::endl;
		return (new ShrubberyCreationForm(target));
	default:
		throw(this->NoFormFoundexception);
		break;
	}
}