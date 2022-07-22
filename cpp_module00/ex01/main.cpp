/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:46:42 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/22 19:19:29 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonbook.hpp"


int main()
{
	class Phonbook phonebook;
	
	int Contactindex = 0;
	int NumsOfContacts = 0;
	std::string input;
	showGuide();
	while(1)
	{
		std::cout << "enter A command: ";
		std::getline(std::cin, input);
		if(std::cin.eof()){
            std::cout << std::endl;
			break; 
        }
		if(input == "ADD")
		{
			phonebook.setContact(Addcontact(), Contactindex);
			if(NumsOfContacts < 8)
				NumsOfContacts++;
            Contactindex++;
		}
		else if (input == "SEARCH")
		{
			showcontact(phonebook.getContact(), NumsOfContacts);
			getcontactid(phonebook.getContact(), NumsOfContacts);
		}
		else if (input == "EXIT")
			exit(1);
	}
}