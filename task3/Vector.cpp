#include"Vector.hpp"
#include<iostream>
Vector::Vector()
{
	capacity = 10;
	resize = 10;
	size = 0;
	arr = new int[capacity];
	begin = arr;
}
Vector::Vector(int num)
{
	capacity = num;
	resize = 10;
	size = 0;
	arr = new int[capacity];
	begin = arr;
}
Vector::~Vector()
{
	delete(arr);
}
int Vector::getSize()
{
	return size;
}
int Vector::getCapacity()
{
	return capacity;
}
bool Vector::isEmpty()
{
	if (size = 0)
		return true;
	return false;
}
void Vector::assign(int num)
{
	int* ptr = begin;
	for (int i = 0;i < size;i++)
	{
		*ptr = num;
		ptr++;
	}
}
void Vector::clear()
{
	int* ptr = begin;
	for (int i = 0;i < size;i++)
	{
		delete(ptr);
		ptr++;
	}

}
void Vector::push_back(int num)
{
	if (size == capacity)
	{
		int* temp=new int[size];
		int* ptr = begin;
		for (int i = 0;i < size;i++)
		{
			temp[i] = ptr[i];
		}
		arr = new int[capacity + resize];
		begin = arr;
		for (int i = 0;i < size;i++)
		{
			arr[i] = temp[i];
		}

	}
	arr[size] = num;
	size++;
}
void Vector::pop_back()
{
	int* ptr = &arr[size - 1];
	delete(ptr);
	size--;
}
void Vector::reserve(int n)
{
	int* temp = new int[size];
	int* ptr = begin;
	for (int i = 0;i < size;i++)
	{
		temp[i] = ptr[i];
	}
	arr = new int[n];
	begin = arr;
	for (int i = 0;i < size;i++)
	{
		arr[i] = temp[i];
	}
}
int Vector::getAt(int indx)
{
	return arr[indx];
}
void Vector::Resize(int n)
{
	if (n < size)
	{
		for (int i = 0;i <size-n;i++)
		{
			pop_back();
		}
		reserve(n);
	}
	if (n > size && n < capacity)
	{
		for (int i = 0;i < n - size;i++)
		{
			push_back(0);
		}
	}
	if (n > capacity)
	{
		capacity = n;
		reserve(n);
		for (int i = 0;i < n - size;i++)
		{
			push_back(0);
		}
	}


}
void Vector::Resize(int n, const int& val)
{
	if (n < size)
	{
		for (int i = 0;i < size - n;i++)
		{
			pop_back();
		}
		reserve(n);
	}
	if (n > size && n < capacity)
	{
		for (int i = 0;i < n - size;i++)
		{
			push_back(val);
		}
	}
	if (n > capacity)
	{
		capacity = n;
		reserve(n);
		for (int i = 0;i < n - size;i++)
		{
			push_back(val);
		}
	}
}
