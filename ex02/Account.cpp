/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:05:48 by araqioui          #+#    #+#             */
/*   Updated: 2023/07/28 09:10:12 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

static void timeFormat(int exactTime)
{
	if (exactTime < 10)
		std::cout << "0";
	std::cout << exactTime;
}

void Account::_displayTimestamp(void)
{
	std::time_t curTime = std::time(NULL);
	std::tm timeInfo = *std::localtime(&curTime);

	std::cout << "[" << timeInfo.tm_year + 1900;
	timeFormat(timeInfo.tm_mon + 1);
	timeFormat(timeInfo.tm_mday);
	std::cout << "_";
	timeFormat(timeInfo.tm_hour);
	timeFormat(timeInfo.tm_min);
	timeFormat(timeInfo.tm_sec);
	std::cout << "] ";
}

Account::Account(int deposit)
{
	static int i;

	_displayTimestamp();
	std::cout << "index:" << i++ << ";amount:" << deposit << ";created" << std::endl;
	_amount = deposit;
	_accountIndex = i - 1;
	_nbAccounts = i;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
	_totalAmount = 0;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";deposit:" << deposit;
	_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += _amount;
	std::cout << ";amount:" << checkAmount() << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:";
	if (withdrawal > checkAmount())
	{
		_totalAmount += _amount;
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	_totalAmount += _amount;
	std::cout << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}
