
#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"
void _displayTimestamp( void ) {
	time_t		now = time(0);
	struct tm	*ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year;
	std::cout << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon;    
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_sec << "] ";
}

int main ( )
{
	std::cout << "I am testing the function _displayTimestamp" << std::endl;
	// _displayTimestamp();
	Account a(1000);

	std::cout << "I am testing the function displayAccountsInfos" << std::endl; 
	Account::displayAccountsInfos();
	std::cout << "I am testing the function makeDeposit" << std::endl;
	a.makeDeposit(1000);
	Account::displayAccountsInfos();
	std::cout << "I am testing the function makeWithdrawal" << std::endl;
	a.makeWithdrawal(500);
	Account::displayAccountsInfos();
	std::cout << "I am testing the function makeWithdrawal" << std::endl;
	a.makeWithdrawal(5000);
	Account::displayAccountsInfos();
	std::cout << "I am testing the function makeWithdrawal" << std::endl;
}

// diff -y log.txt log2.txt | less -R  