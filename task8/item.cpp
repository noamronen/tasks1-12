#pragma once
#include"item.hpp"
item::item()
{

}
item::item(string name, int serial_num, int count, double unit_price)
{
	this->name = name;
	this->serial_num = serial_num;
	this->count = count;
	this->unit_price = unit_price;
}

string item::getName()
{
	return name;
}
int item::getSerialNum()
{
	return serial_num;
}
int item::getCount()
{
	return count;
}
double item::getPrice()
{
	return unit_price;
}

void item::setName(string name)
{
	this->name = name;
}
void item::setSerialNum(int serial_num)
{
	this->serial_num = serial_num;
}
void item::setCount(int count)
{
	this->count = count;
}
void item::setPrice(double price)
{
	unit_price = price;
}

double item::totalPrice()
{
	return count * unit_price;
}

bool item::operator<(item& other)
{
	if (this->getSerialNum() < other.getSerialNum())
		return true;
	return false;
}
bool item::operator>(item& other)
{
	if (this->getSerialNum() > other.getSerialNum())
		return true;
	return false;
}
bool item::operator==(item& other)
{
	if (this->getSerialNum() == other.getSerialNum())
		return true;
	return false;
}

