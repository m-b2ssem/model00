#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
#include <string>

class Account {
public:
    // Constructor and Destructor
    Account(int initial_deposit);
    ~Account();

    // Getters
    int getAccountIndex() const;
    int getAmount() const;
    int getNbDeposits() const;
    int getNbWithdrawals() const;

    // Public Methods
    void makeDeposit(int deposit);
    bool makeWithdrawal(int withdrawal);
    static void displayAccountsInfos();
    void displayStatus() const;

    // Static Methods
    static int getNbAccounts();
    static int getTotalAmount();
    static int getNbDepositsTotal();
    static int getNbWithdrawalsTotal();

private:
    static int _nbAccounts;
    static int _totalAmount;
    static int _totalNbDeposits;
    static int _totalNbWithdrawals;

    int _accountIndex;
    int _amount;
    int _nbDeposits;
    int _nbWithdrawals;

    static void _displayTimestamp();
};

#endif
