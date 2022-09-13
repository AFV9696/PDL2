#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "account 1: " << account1.getName() << "balance is $"
         << account1.getBalance();
    cout << "\naccount 2: " << account2.getName() << "balance is $"
         << account2.getBalance();

    cout << "\n\nEnter deposit amount for account 1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding" << depositAmount << "to account balance";
    account1.deposit(depositAmount);

    cout << "\n\naccount 1: " << account1.getName() << "balance is $"
         << account1.getBalance();
    cout << "\naccount 2: " << account2.getName() << "balance is $"
         << account2.getBalance();

    cout << "\n\nEnter deposit amount for account 2: ";
    cin >> depositAmount;
    cout << "adding" << depositAmount << "to account 2 balance ";
    account2.deposit(depositAmount);

    cout << "\n\naccount 1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount 2: " << account2.getName() << " balance is $"
         << account2.getBalance() << endl;

    cout << "\n\nEnter withdraw amount for account 1: ";

        int wdrawAmount;
        cin >> wdrawAmount;
        cout << "withdrawing " << account1.withdraw(wdrawAmount) << " of account balance";

    cout << "\n\naccount: " << account1.getName() << "balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "balance is $"
         << account2.getBalance();

    cout << "\n\nEnter withdraw amount for account 2: ";
    cin >> wdrawAmount;
    cout << "withdrawing " << account2.withdraw(wdrawAmount) << " of account balance";

    cout << "\n\naccount 1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount 2: " << account2.getName() << " balance is $"
         << account2.getBalance() << endl;
}
