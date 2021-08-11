pragma once
#include<iostream>
#include"stack.hpp"
class queue
{
private:
	stack s;
	stack helpStack;
public:
	queue();
	void insertFromBack(int num);
	int PopFromFront();
};

