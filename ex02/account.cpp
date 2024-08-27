#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// Initialize static members
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor
Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    _nbAccounts++;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

// Destructor
Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

// Static methods
int Account::getNbAccounts() {
    return _nbAccounts;
}

int Account::getTotalAmount() {
    return _totalAmount;
}

int Account::getNbDepositsTotal() {
    return _totalNbDeposits;
}

int Account::getNbWithdrawalsTotal() {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts()
              << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDepositsTotal()
              << ";withdrawals:" << getNbWithdrawalsTotal()
              << std::endl;
}

// Member methods
int Account::getAccountIndex() const {
    return _accountIndex;
}

int Account::getAmount() const {
    return _amount;
}

int Account::getNbDeposits() const {
    return _nbDeposits;
}

int Account::getNbWithdrawals() const {
    return _nbWithdrawals;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << (_amount - deposit)
              << ";deposit:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    if (withdrawal > _amount) {
        std::cout << "index:" << _accountIndex
                  << ";p_amount:" << _amount
                  << ";withdrawal:refused" << std::endl;
        return false;
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << (_amount + withdrawal)
              << ";withdrawal:" << withdrawal
              << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals
              << std::endl;
    return true;
}

void Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void Account::_displayTimestamp() {
    std::time_t t = std::time(NULL);  // Replace nullptr with NULL
    std::tm *timePtr = std::localtime(&t);
    std::cout << "[" << (timePtr->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << timePtr->tm_mon + 1
              << std::setw(2) << std::setfill('0') << timePtr->tm_mday << "_"
              << std::setw(2) << std::setfill('0') << timePtr->tm_hour
              << std::setw(2) << std::setfill('0') << timePtr->tm_min
              << std::setw(2) << std::setfill('0') << timePtr->tm_sec << "] ";
}

