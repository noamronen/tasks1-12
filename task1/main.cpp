#include<stdio.h>
#include"stack.hpp"
#include <iostream>
using namespace std;
void reverse(int* arr, int size)
{
	stack s = stack();
	int* ptr = arr;
	for (int i = 0;i < size;i++)
	{
		s.push(*ptr);
		ptr++;
	}
	for (int i = 0;i < size;i++)
	{
		*arr = s.pop();
		arr++;
	}
}
int main()
{
	//checks if list works
	linked_list list(0);
	list.add(1);
	list.add(2);
	list.add(3);
	list.add(4);
	list.print();
	list.erase();
	list.print();
	

	//checks stack
	stack s = stack();
	s.push(1);
	s.push(2);
	s.push(3);
	cout << "top is:" << s.top() << endl;
	cout << "pop: " << s.pop() << endl;
	cout << "pop: " << s.pop() << endl;


	//checks reverse
	int arr[4] = { 1,2,3,4 };
	int* ptr = arr;
	reverse(ptr, 4);
	for (int i = 0;i < 4;i++)
	{
		cout << *ptr << " ";
		ptr++;
	}

	//cin function
	int array[10];
	int* pointer=array;
	for (int i = 0;i < 10;i++)
	{
		cout << "enter a number:" << endl;
		cin >> array[i];
	}
	reverse(pointer, 10);
	for (int i = 0;i < 10;i++)
	{
		cout << *pointer << endl;
		pointer++;
	}
	return 0;
}
