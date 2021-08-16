#pragma once
#include<iostream>
using namespace std;
class BankAccount
{
protected:
	string name;
	double balance = 0;
public:
	BankAccount();
	BankAccount(string name);
	string getName();
	double getBalance();
	virtual double withdraw(double amount);
	void deposit(double amount);
	virtual string getType();
};
