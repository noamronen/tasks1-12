#include"queue.hpp"
queue::queue()
{
	s = stack();
	helpStack = stack();
}
void queue::insertFromBack(int num)
{
	for (int i = 0;i < s.getSize();i++)//moving all numbers from stack 1 to stack 2
	{
		helpStack.push(s.pop());
	}
	s.push(num);
	for (int i = 0;i < helpStack.getSize();i++)
	{
		s.push(helpStack.pop());
	}

}
int queue::PopFromFront()
{
	return s.pop();
}
