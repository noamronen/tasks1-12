#pragma once
#include"customer.hpp"
#include"item.hpp"
#include<map>
using namespace std;

int main()
{
	map<string,customer> customers;
	item items[3] = { item("milk",12345,1,3.0),item("eggs",54321,1,2.15),item("juice",11111,1,4.2) };
	int option = -1;
	while (true)
	{
		cout << "welcome: " << endl;
		cout << "1. to sign as a customer and add items to cart" << endl;
		cout << "2. to update existing customer's items" << endl;
		cout << "3. to print the highest paying customer" << endl;
		cout << "4. to exit";
		cin >> option;
		if (option == 1)
		{
			map<string, customer>::iterator it;
			string name;
			cout << "enter name:" << endl;
			cin >> name;
			customer newCustomer = customer(name);
			it = customers.find(name);
			if (it == customers.end())
			{
				cout << "already exists" << endl;
				break;
			}
			else
			{
				customers.insert(std::pair<string, customer>(name, newCustomer));
				int item_option = -1;
				while (true)
				{
					cout << "items for purchase: (0 to return to main menu)" << endl;
					for (int i = 0;i < 3;i++)
					{
						cout << i + 1 << ". " << items[i].getName() << " price: " << items[i].getPrice() << endl;
					}
					cin >> item_option;
					if (item_option == 0)
						break;
					if (item_option > 0 && item_option < 4)
					{
						customers[name].addItem(items[item_option - 1]);
					}

				}
			}
			
		}
		if (option == 2)
		{
			map<string, customer>::iterator it;
			string name;
			cout << "enter customer's name:" << endl;
			cin >> name;
			it = customers.find(name);
			if (it != customers.end())
			{
				int item_option = -1;
				while (true)
				{
					cout << "items for purchase: (0 to return to main menu)" << endl;
					for (int i = 0;i < 3;i++)
					{
						cout << i + 1 << ". " << items[i].getName() << " price: " << items[i].getPrice() << endl;
					}
					cin >> item_option;
					if (item_option == 0)
						break;
					if (item_option > 0 && item_option < 4)
					{
						customers[name].addItem(items[item_option - 1]);
					}

				}
			}
			else
			{
				cout << "customer doesnt exist" << endl;
			}

		}
		if (option == 3)
		{
			if (customers.size() == 0)
				cout << "no customers" << endl;
			customer max = customer();

			for (map<string, customer>::const_iterator it = customers.begin(); it != customers.end(); ++it)
			{
				customer m = it->second;
				if (m.totalSum() > max.totalSum())
				{
					max = m;
				}
				
			}
			cout << "most expensive cart belongs to: " << max.getName() << " sits at: " << max.totalSum() << "$";
		}
		if (option == 4)
		{
			break;
		}
	}

	return 0;
}
