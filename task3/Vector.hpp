#pragma once
class Vector
{
private:
	int* arr;
	int* begin;
	int size;
	int capacity;
	int resize;
public:
	Vector();
	~Vector();
	Vector(int size);
	int getSize();
	int getCapacity();
	bool isEmpty();
	void assign(int num);
	void push_back(int num);
	void pop_back();
	void reserve(int n);
	int getAt(int indx);
	void Resize(int n);
	void Resize(int n, const int& val);
	void clear();

};
