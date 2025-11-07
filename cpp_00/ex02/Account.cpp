#include "Account.hpp"

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(1), _nbWithdrawals(0)
{
	_nbAccounts++;
	_amount += initial_deposit;
	_totalAmount += initial_deposit;
	_totalNbDeposits++;
	_accountIndex = _nbAccounts - 1;
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

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	this->_totalAmount += deposit; 
}
bool Account::makeWithdrawal(int withdrawal)
{
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	this->_totalNbWithdrawals += 1;
	this->_totalAmount -= withdrawal;
}
int Account::checkAmount(void) const
{}
void Account::displayStatus(void) const
{}