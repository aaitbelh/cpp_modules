/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:22:51 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/18 19:54:09 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit){
	_amount = initial_deposit;
	static int index;
	time_t timenowinsec;
	_accountIndex = index;
	timenowinsec = time(0);
	tm *timenow;
	timenow = localtime(&timenowinsec);
	std::cout <<  '[' << 1900 + timenow->tm_year;
	timenow->tm_mon > 10 ? std::cout << 1 + timenow->tm_mon : std::cout << '0' <<  1 + timenow->tm_mon;
	timenow->tm_mday > 10 ? std::cout << timenow->tm_mday : std::cout << '0' << timenow->tm_mday;
	std::cout << "_";
	timenow->tm_hour > 10 ? std::cout << timenow->tm_hour : std::cout << '0' << timenow->tm_hour;
	timenow->tm_min > 10 ? std::cout << timenow->tm_min : std::cout << '0' << timenow->tm_min;
	timenow->tm_sec > 10 ? std::cout << timenow->tm_sec : std::cout << '0' << timenow->tm_sec;
	std::cout << "] ";
	std::cout << "index:" << index << ";amount:"<< _amount << ";created" <<std::endl;
	index++;
}

int Account::getNbAccounts(){
	_nbAccounts++;
}
int Account::getTotalAmount(){
	_totalAmount += 
}
int Account::getNbAccounts(){
	
}