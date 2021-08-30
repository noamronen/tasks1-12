#pragma once
#include"bsnode.hpp"
#include<iostream>
template<typename T>
bsnode<T>::bsnode()
{

}
template<typename T>
bsnode<T>::bsnode(T data)
{
	this->data = data;
}
template<typename T>
bsnode<T>::bsnode(const bsnode<T>& other)
{
	this->data = other.data;
	this->left = other.left;
	this->right = other.right;
}

template<typename T>
T bsnode<T>::getData()
{
	return data;
}
template<typename T>
void bsnode<T>::setData(T data)
{
	this->data = data;
}
template<typename T>
bool bsnode<T>::isLeaf()
{
	if (left || right)
	{
		return false;
	}
	else
	{
		return true;
	}
}

template<typename T>
void bsnode<T>::insert(bsnode<T>* newNode)
{
	bsnode<T>* ptr=this;
	while (true)
	{
		if (ptr.isLeaf())
		{
			if (newNode->data <= this->data)
				left = newNode;
			right = newNode;
			break;
		}
		else
		{
			if (newNode->data <= data)
				ptr = ptr->left;
			ptr = ptr->right;
		}
	}
	
}
template<typename T>
bsnode<T>* bsnode<T>::search(T val)
{
	bsnode<T>* ptr = this;
	while (ptr)
	{
		if (ptr->data = val)
			return ptr;
		if (ptr->data <= val)
			ptr = ptr->left;
		else
			ptr = ptr->right;
	}
	return NULL;
}

