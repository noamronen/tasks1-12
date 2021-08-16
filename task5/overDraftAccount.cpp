#pragma once
#include"overDraftAccount.hpp"
overDraftAccount::overDraftAccount(string name,double max)
{
	this->name = name;
	maxOverDraft = max;
}
double overDraftAccount::getMax()
{
	return maxOverDraft;
}
double overDraftAccount::withdraw(double amount)
{
	if (balance-amount>=0||((balance-amount)*-1)<=maxOverDraft)
	{
		balance -= amount;
		return amount;
	}
	return 0;

}
string overDraftAccount::getType()
{
	return "overDraftAccount";
}
