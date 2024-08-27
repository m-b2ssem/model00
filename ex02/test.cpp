#include "Account.hpp"
#include <iostream>

int main() {
    Account account1(1000);
    Account account2(500);
    Account account3(200);

    account1.displayStatus();
    account2.displayStatus();
    account3.displayStatus();

    account1.makeDeposit(500);
    account2.makeDeposit(300);
    account3.makeDeposit(200);

    account1.makeWithdrawal(700);
    account2.makeWithdrawal(200);
    account3.makeWithdrawal(500); // This should fail

    Account::displayAccountsInfos();

    return 0;
}
