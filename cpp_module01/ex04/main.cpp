/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:54:37 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/27 19:06:10 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replaceTheOccurence(std::string &str, std::string s1, std::string s2)
{
	int index = 0;
	int tmp = 0;
	while(1)
	{
		index = str.find(s1, tmp);
		tmp += index;
		if(index == std::string::npos)
			break;
		str.erase(index, s1.length());
		str.insert(index, s2);
		tmp += s2.length();
	}
}

void fillTheString(std::string &str, std::fstream &NewFile)
{
	std::string buf;
	while(std::getline(NewFile, buf))
	{
		if(!NewFile.eof())
			buf.append("\n");
		str.append(buf);
	}
}

int main(int ac, char **av)
{
	int i = 0;
	if(ac != 4)
	{
		std::cerr << "ERROR IN ARGUMENTS" << std::endl;
		exit(0); 
	}
	std::string nameOfFile = av[1];
	std::fstream NewFile;
	NewFile.open(nameOfFile, std::fstream::in);
	if(!NewFile)
	{
		std::cerr << "No such file: " << nameOfFile << std::endl;
		exit(1);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string str;
	fillTheString(str, NewFile);
	if(s1 != s2)
		replaceTheOccurence(str, s1, s2);
	std::fstream ReplaceFile;
	ReplaceFile.open(nameOfFile.append(".replace"), std::fstream::out);
	if(!ReplaceFile)
		std::cerr << "error in openen file" << std::endl;
	ReplaceFile << str;
	if(!NewFile.eof())
		ReplaceFile<<std::endl;
	ReplaceFile.close();
	NewFile.close();
	return (0);
}