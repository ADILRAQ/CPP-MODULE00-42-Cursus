/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:05:48 by araqioui          #+#    #+#             */
/*   Updated: 2023/07/27 09:27:40 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int   Account::getNbAccounts(void)
{
   return (_nbAccounts);
}

int   Account::getTotalAmount(void)
{
   return (_totalAmount);
}

int   Account::getNbDeposits(void)
{
   return (_totalNbDeposits);
}

int   Account::getNbWithdrawals(void)
{
   return (_totalNbWithdrawals);
}
