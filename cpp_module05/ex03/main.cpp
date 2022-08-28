/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:24 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/08/26 10:31:06 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
//PresidentialPardonForm
//RobotomyRequestForm
//ShrubberyCreationForm
void f()
{
		Intern JHENEFER;
		Form *RIKO;
		int del = 0;
		try{
			RIKO = JHENEFER.makeForm("d", "JHENEFER");
			del = 1;
			Bureaucrat RUGO("RUGO", 1);
			RUGO.signForm(*RIKO);
			RIKO->beSigned(RUGO);
			RIKO->execute(RUGO);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		if(del == 1)
		{
			delete RIKO;
		}
}
int main()
{
	f();
}