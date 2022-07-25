/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 09:59:20 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/23 13:00:00 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonbook.hpp"

Contact* Phonbook::getContact()
{
	return (contacts);
}

void	Phonbook::setContact(Contact newone, int index)
{
    if(index > 8)
        index = 0;
	this->contacts[index] = newone;
}

Contact Addcontact()
{
    Contact newcontact;
    std::string input;
    while(1)
    {
        std::cout<<"firstname: ";
        std::getline(std::cin, input);
        if(std::cin.eof())
            exit(1);
        if(input.size())
            break;
        else
            std::cerr << "the input is empty try again !" << std::endl;
    }
    newcontact.setfirstname(input);
    while(1)
    {
        std::cout << "lastname: ";
        std::getline(std::cin, input);
        if(std::cin.eof())
            exit(1);        
        if(input.size())
            break;
        else
            std::cerr << "the fieled is empty try again !" << std::endl;
    }
    newcontact.setlastname(input);
    while(1)
    {
        std::cout << "nickname: ";
        std::getline(std::cin, input);
        if(std::cin.eof())
            exit(1);
        if(input.size())
            break;
        else
            std::cerr << "the input is empty try again !" << std::endl;
    }
    newcontact.setnickname(input);
    while(1){
        std::cout << "Phonenumber: ";
        std::getline(std::cin, input);
        if(std::cin.eof())
            exit(1);
        if(newcontact.setPhonNumber(input))
            break;
        else
        {
            std::cout << "only degit are acceptable try again !!" << std::endl;
            input.clear();
        }
    }
    while(1)
    {
        std::cout << "darkestsecret: ";
        std::getline(std::cin, input);
        if(std::cin.eof())
            exit(1);
        if(input.size())
            break;
        else
            std::cerr << "the input is empty try again !" << std::endl;
    }
    newcontact.setDarkestsecret(input);
    return (newcontact);
}

void showcontact(Contact contacts[], int size)
{
    std::cout<< std::setw(10) << "id" << "|" << " firstname" << "|" << "  lastname" << "|" <<  "  nickname" << std::endl;
    for(int i =0 ; i < size ; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << contacts[i].getfirstname(1) << "|" << std::setw(10) << contacts[i].getlastname(1) << "|" << std::setw(10) << contacts[i].getnickname(1) << std::endl;
    }
}

void getcontactid(Contact contact[], int size){
    int id;

    while(1)
    {
        std::cout << "enter the id: ";
        std::cin >> id;
		if(std::cin.eof())
			exit(1);
        if(id > size || id <= 0)
            std::cout << "invalid id" << std::endl;
        else
        {
            id -= 1;
            std::cout << std::setw(11) << "firstname:" << std::setw(10) <<contact[id].getfirstname(0) << std::endl<< std::setw(11) << "lastname:" << std::setw(10) << contact[id].getlastname(0) << std::endl << std::setw(11) << "nickname:" << std::setw(10) <<contact[id].getnickname(0)
                <<std::endl << std::setw(11) << "PhonNumber:" << std::setw(10) << contact[id].getPhonNumber() << std::endl << std::setw(11) <<"darksecret:" << std::setw(10) << contact[id].getDarkestsecret() << std::endl;
            break;
        }
    }
}

void showGuide()
{
	std::cout << "░██╗░░░░░░░██╗███████╗██╗░░░░░░█████╗░░█████╗░███╗░░██╗███████╗"<< std::endl;
	std::cout << "░██║░░██╗░░██║██╔════╝██║░░░░░██╔══██╗██╔══██╗████╗░██║██╔════╝"<< std::endl;
	std::cout << "░╚██╗████╗██╔╝█████╗░░██║░░░░░██║░░╚═╝██║░░██║██╔██╗██║█████╗░░"<< std::endl;
	std::cout << "░░████╔═████║░██╔══╝░░██║░░░░░██║░░██╗██║░░██║██║╚████║██╔══╝░░"<< std::endl;
	std::cout << "░░╚██╔╝░╚██╔╝░███████╗███████╗╚█████╔╝╚█████╔╝██║░╚███║███████╗"<< std::endl;
	std::cout << "░░░╚═╝░░░╚═╝░░╚══════╝╚══════╝░╚════╝░░╚════╝░╚═╝░░╚══╝╚══════╝"<< std::endl;
	std::cout << "▀█▀ █▀█   █▀▄▀█ █▄█   █▀█ █░█ █▀█ █▄░█ █▀▀   █▄▄ █▀█ █▀█ █▄▀ " << std::endl;
	std::cout << "░█░ █▄█   █░▀░█ ░█░   █▀▀ █▀█ █▄█ █░▀█ ██▄   █▄█ █▄█ █▄█ █░█ " << std::endl;
	std::cout << "COMMANDS: ADD, SEARCH, EXIT" << std::endl;
}