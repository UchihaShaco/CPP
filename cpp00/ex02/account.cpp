
#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int Account::getNBAccounts( void ) {
	return (_nbAccounts);
}

int Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
		<< _totalNbWithdrawals << std::endl;
}



