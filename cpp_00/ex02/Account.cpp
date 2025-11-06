#include "Account.hpp"

int Account::_nbAccounts = 0;

Account::Account(int initial_deposit)
{
	_nbAccounts = 1;
	_totalAmount = initial_deposit;
	_totalNbDeposits = 1;
	_totalNbWithdrawals = 0;
}

Account::~Account()
{

}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	return ;
}

void Account::_displayTimestamp()
{
	
}