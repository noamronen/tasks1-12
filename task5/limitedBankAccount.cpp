#include"limitedBankAccount.hpp"
limitedBankAccount::limitedBankAccount(string name,double limit)
{
	this->name = name;
	this->limit = limit;
}
double limitedBankAccount::getLimit()
{
	return limit;
}
void limitedBankAccount::setLimit(double limit)
{
	this->limit = limit;
}
string limitedBankAccount::getType()
{
	return "limitedBankAccount";
}
