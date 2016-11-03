#ifndef
#define

#include <iostream>
using namespace std;

// creates a class called Account
// all public
class Account
{
public:
	// data field
    int id;
    double balance;
    double annualInterestRate;
    string name;
    
    
    Account(int, double, double);
    Account();
    
	// get functions that return either string, double, or int
    string getname();
    double getbalance();
    double getannualInterestRate();
    int getid();
    
    void set_name(string);
    void set_balance(double);
    void set_annualInterestRate(double); // use algorithm
    void set_id(int);
    
    int getMonthlyInterestRate();
	// functions that take into account the balance in relation to amounts withdrawn and deposited
    void withdraw(int);
    void deposit(int);
    
};

#endif
