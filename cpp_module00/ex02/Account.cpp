/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:22:51 by aaitbelh          #+#    #+#             */
/*   Updated: 2022/07/19 17:24:20 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){

	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	static int index;
	_accountIndex = index;
	time_t timenowinsec;
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
	_totalAmount += _amount;
	_nbAccounts++;
}
void Account::displayAccountsInfos(){
	
	time_t timenowinsec;
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
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus()const
{
	time_t timenowinsec;
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
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposists:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ){
	_nbDeposits++;
	time_t timenowinsec;
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
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:" <<_nbDeposits << std::endl;
	
}
bool Account::makeWithdrawal(int withdrawal)
{
	_nbWithdrawals++;
	time_t timenowinsec;
	timenowinsec = time(0);
	_totalAmount = 0;
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
	std::cout << "index:" << _accountIndex << ";withdrawal:";
	if(withdrawal > _amount){
		std::cout << "refused"<< std::endl;
		return (0);
	}
	else
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawls:" << _nbWithdrawals << std::endl;
		return (1);
	}
}
Account::~Account(){
	time_t timenowinsec;
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
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(){
	return (_nbAccounts);
}
int Account::getTotalAmount(){
	return (_totalAmount);
}
int Account::getNbDeposits(){
	return (_totalNbDeposits);
}
int Account::getNbWithdrawals(){
	return(_totalNbWithdrawals);
}