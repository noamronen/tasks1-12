#pragma once
#include"BankAccount.hpp"
class overDraftAccount:public BankAccount
{
private:
	double maxOverDraft;
public:
	overDraftAccount(string name,double max);
	double getMax();
	double withdraw(double amount);
	string getType();
};
