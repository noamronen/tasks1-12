#pragma once
#include"bsnode.hpp"
template<typename T>
class bstree
{
private:
	bsnode<T>* root;
public:
	bstree<T>();
	bstree<T>(T rootVal);
	bstree<T>(bsnode<T>* root);
	bstree<T>(const bstree<T>& other);
	void insert(T val);
	bsnode<T>* search(T val);

};
