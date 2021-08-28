#pragma once
#include<iostream>
#include <set>
#include"item.hpp"
using namespace std;
class customer
{
private:
	string name;
	set<item> items;
public:
	customer();
	customer(string name);
	customer(string name, set<item> items);
	string getName();
	set<item> getItems();
	void setName(string name);
	void setItems(set<item> items);
	double totalSum();
	void addItem(item i);
};
