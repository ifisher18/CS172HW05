//////////////////////
// Ian Fisher
// CS 172
// 10/25/16
//////////////////////

#include <iostream>
using namespace std;
#include "Account.h"
#include "Account.cpp"

// test function that implements each function
void Testing_Account()
{
    Account AccountTest;
    AccountTest.set_name("George");// Sets account name
    AccountTest.set_id(1122); // sets ID #
    AccountTest.set_balance(1000); // function that sets current balance to $4,020.00
    AccountTest.set_annualInterestRate(1.5); // function that sets the interest rate to 4.3
    
    // Tests the deposit and withdraw functions
    AccountTest.deposit(30);
    AccountTest.deposit(40);
    AccountTest.deposit(50);
    AccountTest.withdraw(5);
    AccountTest.withdraw(4);
    AccountTest.withdraw(2);
    
    //Tests how to add a transaction
    // couts the Name of account
    cout << "Name:" << Account1.getname() << endl;
	cout << endl;
    // couts the current balance
    cout << "Balance $" << Account1.getbalance() << endl;
	cout << endl;
    // couts the currently Monthly Interest
    cout << " Monthly Interest " << Account1.getMonthlyInterestRate() << endl;
    	cout << endl;
}
