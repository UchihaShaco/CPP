
#include "Account.hpp"
#include <iostream>
#include <iomanip>


int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";created" << std::endl;
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp(void)
{
	time_t		now = time(0);
	struct tm	*ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year;
	std::cout << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon; 
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_sec << "] ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
		<< _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits
		<< std::endl;
}

bool Account::makeWithdrawal(int withdrawl)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";withdrawal:";
	if (withdrawl > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}  
	_amount -= withdrawl;
	_totalAmount -= withdrawl;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << withdrawl << ";amount:" << _amount << ";nb_withdrawals:"
		<< _nbWithdrawals << std::endl;
	return (true);
}


int Account::checkAmount( void ) const
{
	return (_amount);
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	Account::_nbAccounts--;
	Account::_totalAmount -= _amount;
	Account::_totalNbDeposits -= _nbDeposits;
	Account::_totalNbWithdrawals -= _nbWithdrawals;
	
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";closed" << std::endl;
}
