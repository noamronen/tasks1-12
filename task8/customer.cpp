#pragma once
#include"customer.hpp"
customer::customer()
{

}
customer::customer(string name)
{
	this->name = name;
}
customer::customer(string name, set<item> items)
{
	this->name = name;
	this->items = items;
}
string customer::getName()
{
	return name;
}
set<item> customer::getItems()
{
	return items;
}
void customer::setName(string name)
{
	this->name = name;
}
void customer::setItems(set<item> items)
{
	this->items = items;
}
double customer::totalSum()
{
	double sum = 0;
	for (item i : items)
	{
		sum += i.totalPrice();
	}
}
void customer::addItem(item i)
{
	items.insert(i);
}
