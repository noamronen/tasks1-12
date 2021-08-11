#include"stack.hpp"
stack::stack()
{
	size = 0;
	list = linked_list();
}

stack::stack(linked_list list, int size)
{
	this->list = list;
	this->size = size;
}

int stack::top()
{
	return list.peek();
}

int stack::pop()
{
	return list.erase();
}
void stack::push(int data)
{
	list.add(data);
}
int stack::getSize()
{
	return size;
}
