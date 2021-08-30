#pragma once
#include"bstree.hpp"
template<typename T>
bstree<T>::bstree()
{

}
template<typename T>
bstree<T>::bstree(T rootVal)
{
	this->root->data = rootVal;
}
template<typename T>
bstree<T>::bstree(bsnode<T>* root)
{
	this->root = root;
}
template<typename T>
bstree<T>::bstree(const bstree<T>& other)
{
	this = other;
}
template<typename T>
bsnode<T>* bstree<T>::search(T val)
{
	return root->search(val);
}
template<typename T>
void bstree<T>::insert(T val)
{
	root->insert(val);
}
