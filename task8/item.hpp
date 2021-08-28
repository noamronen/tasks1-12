#pragma once
#include<iostream>
using namespace std;
class item
{
private:
	string name;
	int serial_num;
	int count = 1;
	double unit_price;
public:
	item();
	item(string name, int serial_num, int count, double unit_price);
	
	string getName();
	int getSerialNum();
	int getCount();
	double getPrice();

	void setName(string name);
	void setSerialNum(int serial_num);
	void setCount(int count);
	void setPrice(double price);

	double totalPrice();

	bool operator<(item& other);
	bool operator>(item& other);
	bool operator==(item& other);


};
