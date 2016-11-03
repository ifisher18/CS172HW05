//

#include "Account.h"
// Constructor that passes in id0, balance0, and annualInterestRate
Account::Account(int idAcc, double balanceAcc, double annualInterestRateAcc)
{
    id=idAcc;
    balance=balanceAcc;
    annualInterestRate=annualInterestRateAcc;
}

// Constructor that sets default values
Account::Account()
{
    id=1234; // default ID
    balance=2000;// default balance
    annualInterestRate=5; // default interest of 5%
}

// set name function that sets name equal to Acc_name
void Account::set_name(string Acc_name)
{
    name=Acc_name;
}

// function that sets balance equal to Acc balance
void Account::set_balance(double Acc_balance)
{
    balance=Acc_balance;
}

// set function (void) that sets the annual interest rate
void Account::set_annualInterestRate(double Acc_annualInterestRate)
{
    annualInterestRate=Acc_annualInterestRate;
}

// function that sets ID equal to Acc_id
void Account::set_id(int Acc_id)
{
    id=Acc_id;
}

// get function that returns a string of the name of the account holder
string Account:: getname()
{
    return name;
}

// get function that returns the current balance (double)
double Account:: getbalance()
{
    return balance;
}

// get function that calcs the monthly interest
int Account::getMonthlyInterestRate()
{
    return (annualInterestRate*balance)/12; // algorithm that calcs the monthly interest rate
}

// withdraw function that calculates the balance after a specific amount is subtracted away
void Account::withdraw(int amount)
{
    balance -= amount; // 
}

// deposit function that adds an amount to balance if called
void Account::deposit(int amount)
{
    balance += amount;
}
