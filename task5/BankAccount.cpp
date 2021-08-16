#include"BankAccount.hpp"
BankAccount::BankAccount()
{
	
}
BankAccount::BankAccount(string name)
{
	this->name = name;
}
string BankAccount::getName()
{
	return name;
}
double BankAccount::getBalance()
{
	return balance;
}
double BankAccount::withdraw(double amount)
{
	if (balance >= amount)
	{
		balance -= amount;
		return amount;
	}
	return 0;
	
}
void BankAccount::deposit(double amount)
{
	balance += amount;
}
string BankAccount::getType()
{
	return "BankAccount";
}
