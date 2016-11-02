#pragma once

#include <iostream>
using namespace std;

class Account {
public:
	// data field
	int id;
	double balance;
	double annualInterestRate;
	Account();
	// accessor and mutator functions for id, balance, and annualInterestRate
	double withdraw(double amount);
	double deposit(double amount);
};
