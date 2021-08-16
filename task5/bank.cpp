#pragma once
#include"limitedBankAccount.hpp"
#include"overDraftAccount.hpp"
#include"BankAccount.hpp"
#include<iostream>
using namespace std;
int main()
{
	BankAccount* arr = new BankAccount[20];
	int numOfAccounts=0;
	int option = -1,account_option=-1;
	while (true)
	{
		cout << "welcome: " << endl;
		cout << "1. add new account" << endl;
		cout << "2. to make transaction from existing account" << endl;
		cout << "3. to list all accounts, type and balance" << endl;
		cout << "4. to exit" << endl;
		cin >> option;
		if (option == 1)
		{
			if (numOfAccounts == 20)
				cout << "unable to create an account, no capacity.";
			else
			{
				cout << "for a aregular account press 1" << endl << "for an overdraft account press 2" << endl << "for a limited account press 3" << endl;
				cin >> account_option;
				if (account_option == 1)
				{
					string name;
					cout << "enter name: " << endl;
					cin >> name;
					BankAccount* account = new BankAccount(name);
					arr[numOfAccounts] = *account;
					numOfAccounts++;
				}
				if (account_option == 2)
				{
					string name;
					double max;
					cout << "enter name: " << endl;
					cin >> name;
					cout << "enter max: " << endl;
					cin >> max;
					overDraftAccount* account = new overDraftAccount(name, max);
					arr[numOfAccounts] = *account;
					numOfAccounts++;
				}
				if (account_option == 3)
				{
					string name;
					double limit;
					cout << "enter name: " << endl;
					cin >> name;
					cout << "enter limit: " << endl;
					cin >> limit;
					limitedBankAccount* account = new limitedBankAccount(name, limit);
					arr[numOfAccounts] = *account;
					numOfAccounts++;
				}
			}
			

		}
		if (option == 2)
		{
			string name;
			int indx;
			bool found = false;
			cout << "enter owner's name: " << endl;
			cin >> name;
			for (int i = 0;i < numOfAccounts;i++)
			{
				if (arr[i].getName() == name)
				{
					indx = i;
					found = true;
				}	
			}
			if (found == true)
			{
				int transaction_option = -1;
				cout << "welcome " << name << "! " << endl;
				cout << "1. to deposit money" << endl;
				cout << "2. to withdraw money" << endl;
				cout << "3. to view balance" << endl;
				cout << "4. return to main menu" << endl;
				cin >> transaction_option;
				if (transaction_option == 1)
				{
					double amount = 0;
					cout << "enter an amount: " << endl;
					cin >> amount;
					arr[indx].deposit(amount);
				}
				if (transaction_option == 2)
				{
					double amount = 0;
					cout << "enter an amount: " << endl;
					cin >> amount;
					arr[indx].withdraw(amount);
				}
				if (transaction_option == 3)
				{
					cout << "current balance: " << arr[indx].getBalance() << endl;
				}
				if (transaction_option == 4)
				{

				}

			}
			else
			{
				cout << "account not found" << endl;
			}
		}
		if (option == 3)
		{
			for (int i = 0;i < numOfAccounts;i++)
			{
				cout << "name: " << arr[i].getName() << "  balance: " << arr[i].getBalance() << "  type: " << arr[i].getType() << endl;
			}
		}
		if (option == 4)
			break;

	}

	return 0;
}
