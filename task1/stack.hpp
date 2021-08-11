#include"linkedList.hpp"
class stack 
{
private:
	linked_list list;
	int size;
public:
	stack();
	stack(linked_list list, int size);
	int top();
	int pop();
	void push(int data);
	int getSize();

};
