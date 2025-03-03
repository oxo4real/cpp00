/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:33:24 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/01 12:25:59 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) :
    _accountIndex(_nbAccounts),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
    this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:"
              << _accountIndex
              << ";amount:"
              << initial_deposit
              << ";created"
              << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:"
              << _accountIndex
              << ";amount:"
              << _amount
              << ";closed"
              << std::endl;
}

void    Account::_displayTimestamp( void )
{
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);
    std::cout << "["
              << std::setfill('0')
              << std::setw(4) << localTime->tm_year + 1900
              << std::setw(2) << localTime->tm_mon + 1
              << std::setw(2) << localTime->tm_mday
              << "_"
              << std::setw(2) << localTime->tm_hour
              << std::setw(2) << localTime->tm_min
              << std::setw(2) << localTime->tm_sec
              << "]"
              << " ";
}

int Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (_totalAmount);
}
int Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:"
              << _nbAccounts
              << ";total:"
              << _totalAmount
              << ";deposits:"
              << _totalNbDeposits
              << ";withdrawals:"
              << _totalNbWithdrawals
              << std::endl;
}

void    Account::makeDeposit( int deposit )
{
    _totalNbDeposits++;
    _nbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:"
              << _accountIndex
              << ";p_amount:"
              << _amount - deposit
              << ";deposit:"
              << deposit
              << ";amount:"
              << _amount
              << ";nb_deposits:"
              << _nbDeposits
              << std::endl;
}

int Account::checkAmount( void ) const
{
    return (_amount);
}

void    Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:"
              << _accountIndex
              << ";amount:"
              << _amount
              << ";deposits:"
              << _nbDeposits
              << ";withdrawals:"
              << _nbWithdrawals
              << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal <= _amount)
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        _displayTimestamp();
        std::cout << "index:"
                  << _accountIndex
                  << ";p_amount:"
                  << _amount + withdrawal
                  << ";withdrawal:"
                  << withdrawal
                  << ";amount:"
                  << _amount
                  << ";nb_withdrawals:"
                  << _nbWithdrawals
                  << std::endl;
        return (true);
    }
    _displayTimestamp();
    std::cout << "index:"
              << _accountIndex
              << ";p_amount:"
              << _amount
              << ";withdrawal:refused"
              << std::endl;
    return (false);
}
